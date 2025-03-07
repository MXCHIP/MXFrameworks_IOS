
import Foundation
import SDWebImage


class MXProvisionDeviceCell: UITableViewCell {
    public typealias MoreDeviceActionCallback = (_ item: MXProvisionDeviceInfo) -> ()
    public var moreActionCallback : MoreDeviceActionCallback!
    var deviceInfo : MXProvisionDeviceInfo!
    
    override init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        self.setupViews()
    }
    
    public func setupViews() {
        self.backgroundColor = AppUIConfiguration.backgroundColor.level3.FFFFFF
        self.layer.cornerRadius = 16.0
        self.layer.masksToBounds = true
        
        self.addSubview(self.iconView)
        self.iconView.pin.left(16).top(20).width(40).height(40)
        self.addSubview(self.nameLB)
        self.nameLB.pin.right(of: self.iconView).marginLeft(16).top(30).height(20).right(60)
        
        self.addSubview(self.statusLB)
        self.statusLB.pin.below(of: self.nameLB, aligned: .left).marginTop(4).height(16).right(60)
        self.statusLB.isHidden = true
        
        self.addSubview(self.actionBtn)
        self.actionBtn.pin.right(24).width(20).height(20).vCenter()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    public func refreshView(info: MXProvisionDeviceInfo) {
        
        self.nameLB.pin.right(of: self.iconView).marginLeft(16).top(30).height(20).right(60)
        self.statusLB.pin.below(of: self.nameLB, aligned: .left).marginTop(4).height(16).right(60)
        self.statusLB.isHidden = true
        
        self.nameLB.text = info.showName
        
        if let productImage = info.productInfo?.image {
            self.iconView.sd_setImage(with: URL(string: productImage), placeholderImage: UIImage(named: productImage), completed: nil)
        }
        switch info.provisionStatus {
        case 1:
            self.actionBtn.setTitleColor(AppUIConfiguration.MXAssistColor.main, for: .normal)
            self.actionBtn.setTitle("\u{e70e}", for: .normal)
        case 2:
            self.actionBtn.setTitleColor(AppUIConfiguration.MXAssistColor.main, for: .normal)
            self.actionBtn.setTitle("\u{e6f4}", for: .normal)
        case 3:
            self.actionBtn.setTitleColor(AppUIConfiguration.MXAssistColor.red, for: .normal)
            self.actionBtn.setTitle("\u{e73a}", for: .normal)
            self.statusLB.isHidden = false
            self.nameLB.pin.right(of: self.iconView).marginLeft(16).top(20).height(20).right(60)
            self.statusLB.pin.below(of: self.nameLB, aligned: .left).marginTop(4).height(16).right(60)
        default:
            self.actionBtn.setTitle(nil, for: .normal)
        }
        
        self.actionBtn.layer.removeAllAnimations()
        if info.provisionStatus == 1 {
            let animatiion = CABasicAnimation(keyPath: "transform.rotation.z")
            animatiion.fromValue = 0.0
            animatiion.toValue = 2*Double.pi
            animatiion.repeatCount = 0
            animatiion.duration = 1
            animatiion.isRemovedOnCompletion = false
            self.actionBtn.layer.add(animatiion, forKey: "LoadingAnimation")
        }
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        self.iconView.pin.left(16).top(20).width(40).height(40)
        if self.statusLB.isHidden {
            self.nameLB.pin.right(of: self.iconView).marginLeft(16).top(30).height(20).right(60)
        } else {
            self.nameLB.pin.right(of: self.iconView).marginLeft(16).top(20).height(20).right(60)
        }
        self.statusLB.pin.below(of: self.nameLB, aligned: .left).marginTop(4).height(16).right(60)
        self.actionBtn.pin.right(24).width(20).height(20).vCenter()
    }
    
    lazy var iconView : UIImageView = {
        let _iconView = UIImageView()
        _iconView.backgroundColor = UIColor.clear
        _iconView.contentMode = .scaleAspectFit
        return _iconView
    }()
    
    lazy var nameLB : UILabel = {
        let _nameLB = UILabel(frame: .zero)
        _nameLB.font = UIFont.systemFont(ofSize: AppUIConfiguration.TypographySize.H4);
        _nameLB.textColor = AppUIConfiguration.NeutralColor.title;
        return _nameLB
    }()
    
    lazy var statusLB : UILabel = {
        let _statusLB = UILabel(frame: .zero)
        _statusLB.font = UIFont.systemFont(ofSize: AppUIConfiguration.TypographySize.H6);
        _statusLB.textColor = AppUIConfiguration.MXAssistColor.red;
        _statusLB.text = localized(key:"添加失败")
        return _statusLB
    }()
    
    lazy public var actionBtn : UIButton = {
        let _actionBtn = UIButton(type: .custom)
        _actionBtn.titleLabel?.font = UIFont.iconFont(size: AppUIConfiguration.TypographySize.H1)
        _actionBtn.setTitle(nil, for: .normal)
        _actionBtn.setTitleColor(AppUIConfiguration.MXAssistColor.main, for: .normal)
        _actionBtn.isUserInteractionEnabled = false
        return _actionBtn
    }()
}
