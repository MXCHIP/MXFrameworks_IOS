#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef MESHSDK_SWIFT_H
#define MESHSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreBluetooth;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MeshSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



@class NSString;

SWIFT_PROTOCOL("_TtP7MeshSDK14MXMeshDelegate_")
@protocol MXMeshDelegate
@optional
- (void)meshConnectChangeWithStatus:(NSInteger)status;
- (void)provisionerSequenceUpdateWithSeq:(NSInteger)seq;
- (void)meshNetworkIvIndexUpdateWithIndex:(NSInteger)index;
- (void)deviceStatusUpdateWithUuid:(NSString * _Nonnull)uuid status:(NSInteger)status;
- (void)deviceCacheInvalidWithUuid:(NSString * _Nonnull)uuid;
- (void)receiveMeshMessageWithUuid:(NSString * _Nonnull)uuid elementIndex:(NSInteger)elementIndex message:(NSString * _Nonnull)message;
@end

@class CBCentralManager;
@class CBPeripheral;
@class NSNumber;

SWIFT_CLASS("_TtC7MeshSDK16MXMeshDeviceScan")
@interface MXMeshDeviceScan : NSObject <CBCentralManagerDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MXMeshDeviceScan * _Nonnull shared;)
+ (MXMeshDeviceScan * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)scanDeviceWithMac:(NSString * _Nullable)mac timeout:(NSInteger)timeout callback:(void (^ _Nonnull)(NSArray<NSDictionary<NSString *, id> *> * _Nonnull))callback;
- (void)stopScan;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDiscoverPeripheral:(CBPeripheral * _Nonnull)peripheral advertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData RSSI:(NSNumber * _Nonnull)RSSI;
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
@end


SWIFT_CLASS("_TtC7MeshSDK19MXMeshMessageHandle")
@interface MXMeshMessageHandle : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) MXMeshMessageHandle * _Nonnull shard;)
+ (MXMeshMessageHandle * _Nonnull)shard SWIFT_WARN_UNUSED_RESULT;
+ (void)setShard:(MXMeshMessageHandle * _Nonnull)value;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull attrParams;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)updateTranscodingMappingWithData:(NSDictionary * _Nullable)data;
+ (NSString * _Nullable)createIdentifierWithOldIdentifier:(NSString * _Nonnull)oldIdentifier service:(NSInteger)service SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)identifierConvertToAttrTypeWithIdentifier:(NSString * _Nonnull)identifier SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)properiesToMessageHexWithIdentifier:(NSString * _Nonnull)identifier value:(id _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, id> * _Nonnull)resolveMeshMessageToPropertiesWithMessage:(NSString * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, id> * _Nullable)getMeshResolveMapWithAttrType:(NSString * _Nonnull)attrType attrInfo:(NSDictionary<NSString *, id> * _Nonnull)attrInfo SWIFT_WARN_UNUSED_RESULT;
@end

@protocol MXMeshProvisioningDelegate;
@class UnprovisionedDevice;

SWIFT_CLASS("_TtC7MeshSDK22MXMeshProvisionManager")
@interface MXMeshProvisionManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MXMeshProvisionManager * _Nonnull shared;)
+ (MXMeshProvisionManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic) BOOL isNeedCompositionData;
@property (nonatomic, weak) id <MXMeshProvisioningDelegate> _Nullable provisionDelegate;
@property (nonatomic) BOOL isBusy;
- (void)mxProvisionFinish;
- (void)startUnprovisionedDeviceProvisionWithDevice:(UnprovisionedDevice * _Nonnull)device peripheral:(CBPeripheral * _Nonnull)peripheral networkKey:(NSString * _Nonnull)networkKey delegate:(id <MXMeshProvisioningDelegate> _Nullable)delegate;
- (void)startUnprovisionedDeviceProvisionWithMac:(NSString * _Nonnull)mac networkKey:(NSString * _Nonnull)networkKey delegate:(id <MXMeshProvisioningDelegate> _Nullable)delegate;
- (void)startUnprovisionedDeviceProvisionWithAdvertisementData:(NSDictionary<NSString *, id> * _Nonnull)advertisementData peripheral:(CBPeripheral * _Nonnull)peripheral networkKey:(NSString * _Nonnull)networkKey provisioningDelegate:(id <MXMeshProvisioningDelegate> _Nullable)provisioningDelegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MXPBGattBearer;

SWIFT_CLASS("_TtC7MeshSDK18MXMeshProvisioning")
@interface MXMeshProvisioning : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MXMeshProvisioning * _Nonnull shared;)
+ (MXMeshProvisioning * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, weak) id <MXMeshProvisioningDelegate> _Nullable provisioningDelegate;
@property (nonatomic, copy) void (^ _Nullable provisioningCallback)(NSInteger, NSString * _Nonnull, NSString * _Nonnull, MXPBGattBearer * _Nonnull);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)mxProvisioningCancel;
- (void)mxProvisioningFinish:(NSInteger)code;
- (nonnull instancetype)initWithDevice:(UnprovisionedDevice * _Nonnull)device peripheral:(CBPeripheral * _Nonnull)peripheral networkKey:(NSString * _Nonnull)networkKey;
- (void)connectUnprovisionedDeviceWithDevice:(UnprovisionedDevice * _Nonnull)device peripheral:(CBPeripheral * _Nonnull)peripheral networkKey:(NSString * _Nonnull)networkKey;
- (void)identifyNode;
- (void)setProvisionUnicastAddressWithAddress:(NSInteger)address;
- (void)startProvisioning;
@end



@interface MXMeshProvisioning (SWIFT_EXTENSION(MeshSDK))
- (void)inputComplete;
@end


@class NSError;

SWIFT_PROTOCOL("_TtP7MeshSDK26MXMeshProvisioningDelegate_")
@protocol MXMeshProvisioningDelegate
@optional
- (void)inputExchangeInformationWithUuid:(NSString * _Nullable)uuid confirmationKey:(NSString * _Nonnull)confirmationKey handler:(void (^ _Nonnull)(NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))handler;
- (void)checkStaticOOBDeviceInfoWithUuid:(NSString * _Nullable)uuid provisionerRandom:(NSString * _Nonnull)provisionerRandom deviceConfirmation:(NSString * _Nonnull)deviceConfirmation deviceRandom:(NSString * _Nonnull)deviceRandom handler:(void (^ _Nonnull)(NSString * _Nullable, BOOL))handler;
- (void)inputPublicKeyWithUuid:(NSString * _Nullable)uuid handler:(void (^ _Nonnull)(NSString * _Nonnull))handler;
- (void)inputUnicastAddressWithUuid:(NSString * _Nullable)uuid elementNum:(NSInteger)elementNum handler:(void (^ _Nonnull)(NSString * _Nullable, NSInteger))handler;
- (void)meshProvisionProcessWithUuid:(NSString * _Nullable)uuid step:(NSInteger)step;
- (void)meshProvisionFinishWithUuid:(NSString * _Nullable)uuid error:(NSError * _Nullable)error;
@end

@class CBService;
@class CBCharacteristic;

/// Base implementation for GATT Proxy bearer.
/// This object is not required to be used with nRF Mesh Provisioning library.
/// Bearers are separate from the mesh networking part and the data must be
/// passed to and from by the application.
SWIFT_CLASS("_TtC7MeshSDK14MXPBGattBearer")
@interface MXPBGattBearer : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
- (void)centralManager:(CBCentralManager * _Nonnull)central didConnectPeripheral:(CBPeripheral * _Nonnull)peripheral;
- (void)centralManager:(CBCentralManager * _Nonnull)central didDisconnectPeripheral:(CBPeripheral * _Nonnull)peripheral error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverServices:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didDiscoverCharacteristicsForService:(CBService * _Nonnull)service error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didModifyServices:(NSArray<CBService *> * _Nonnull)invalidatedServices;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didUpdateNotificationStateForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didUpdateValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didWriteValueForCharacteristic:(CBCharacteristic * _Nonnull)characteristic error:(NSError * _Nullable)error;
- (void)peripheral:(CBPeripheral * _Nonnull)peripheral didReadRSSI:(NSNumber * _Nonnull)RSSI error:(NSError * _Nullable)error;
- (void)peripheralIsReadyToSendWriteWithoutResponse:(CBPeripheral * _Nonnull)peripheral;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC7MeshSDK7MeshSDK")
@interface MeshSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MeshSDK * _Nonnull sharedInstance;)
+ (MeshSDK * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) id <MXMeshDelegate> _Nullable delegate;
@property (nonatomic) BOOL isSegmented;
@property (nonatomic) uint16_t nextUnicastAddress;
@property (nonatomic) NSInteger proxyRSSI;
@property (nonatomic) NSInteger meshMaxConnections;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull listenResult;
@property (nonatomic, copy) void (^ _Nullable meshGattRssiback)(CBPeripheral * _Nonnull, NSInteger);
@property (nonatomic, readonly, copy) NSString * _Nullable connectedDeviceMac;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)setupWithConfig:(NSDictionary<NSString *, id> * _Nullable)config provisioningServiceConfig:(NSDictionary<NSString *, NSString *> * _Nullable)provisioningServiceConfig proxyServiceConfig:(NSDictionary<NSString *, NSString *> * _Nullable)proxyServiceConfig networkConfig:(NSDictionary<NSString *, id> * _Nullable)networkConfig;
@end



@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)getGATTProxyStatusWithUuid:(NSString * _Nullable)uuid callback:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))callback;
@end





@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)subscribeMeshProxyFilterWithAddress:(uint16_t)address;
- (void)unsubscribeMeshProxyFilterWithAddress:(uint16_t)address;
@end



@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (NSArray<NSString *> * _Nonnull)getAllApplicationKeyWithNetworkKey:(NSString * _Nonnull)networkKey SWIFT_WARN_UNUSED_RESULT;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (uint8_t)getFeatureFlagWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isMxchipDeviceWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDeviceMacAddressWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getDeviceProductIdWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNextTid SWIFT_WARN_UNUSED_RESULT;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)exportMeshNetworkWithCallback:(SWIFT_NOESCAPE void (^ _Nonnull)(NSString * _Nonnull))callback;
- (void)importMeshNetworkWithJsonString:(NSString * _Nonnull)jsonString callback:(SWIFT_NOESCAPE void (^ _Nonnull)(BOOL))callback;
- (void)importMeshNetworkConfigWithJsonString:(NSString * _Nonnull)jsonString callback:(SWIFT_NOESCAPE void (^ _Nonnull)(BOOL))callback;
- (void)resetProvisionerUnicastAddressWithAddress:(uint16_t)address;
- (void)setMeshNetworkSequenceWithSeq:(uint32_t)seq updateInterval:(uint32_t)updateInterval;
- (uint32_t)getMeshNetworkSequence SWIFT_WARN_UNUSED_RESULT;
- (void)setMeshNetworkIvIndexWithIndex:(uint32_t)index;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)sendMeshMessageWithOpCode:(NSString * _Nonnull)opCode uuid:(NSString * _Nonnull)uuid elementIndex:(NSInteger)elementIndex tid:(NSString * _Nullable)tid message:(id _Nonnull)message repeatNum:(NSInteger)repeatNum timeout:(NSTimeInterval)timeout networkKey:(NSString * _Nullable)networkKey isQueue:(BOOL)isQueue isRetry:(BOOL)isRetry callback:(void (^ _Nullable)(NSDictionary<NSString *, id> * _Nonnull))callback;
- (void)sendMessageWithAddress:(NSString * _Nonnull)address opCode:(NSString * _Nonnull)opCode tid:(NSString * _Nullable)tid message:(id _Nonnull)message networkKey:(NSString * _Nonnull)networkKey repeatNum:(NSInteger)repeatNum isQueue:(BOOL)isQueue;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (NSArray<NSString *> * _Nonnull)getAllNetworkKey SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isNetworkKeyExistsWithNetworkKey:(NSString * _Nonnull)networkKey SWIFT_WARN_UNUSED_RESULT;
- (BOOL)createNetworkKeyWithKey:(NSString * _Nonnull)key appKey:(NSString * _Nullable)appKey SWIFT_WARN_UNUSED_RESULT;
- (BOOL)createNetworkKeyWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (BOOL)deleteNetworkKeyWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)setCurrentNetworkKeyWithKey:(NSString * _Nonnull)key;
- (NSString * _Nonnull)getCurrentNetworkKey SWIFT_WARN_UNUSED_RESULT;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (BOOL)addNodeWithJsonObject:(NSDictionary<NSString *, id> * _Nonnull)jsonObject SWIFT_WARN_UNUSED_RESULT;
- (BOOL)deleteNodeWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (void)resetNodeWithUuid:(NSString * _Nonnull)uuid callback:(void (^ _Nullable)(BOOL))callback;
- (NSArray<NSString *> * _Nonnull)fetchAllNodeUUID SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getNodeAddressWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getNodeUUIDWithMac:(NSString * _Nonnull)mac SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<NSString *, id> * _Nullable)getNodeInfoWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)fetchDeviceTripletWithUuid:(NSString * _Nonnull)uuid callback:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))callback;
- (void)fogDeviceTripletWithUuid:(NSString * _Nonnull)uuid callback:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))callback;
- (void)sendSyncMessageWithNetworkKey:(NSString * _Nonnull)networkKey;
- (void)rebootDeviceWithUuid:(NSString * _Nonnull)uuid;
- (void)fetchDeviceFirmwareVersionWithUuid:(NSString * _Nonnull)uuid callback:(void (^ _Nonnull)(NSString * _Nonnull))callback;
- (void)triggerVirtualButtonWithVid:(NSString * _Nonnull)vid networkKey:(NSString * _Nonnull)networkKey repeatNum:(NSInteger)repeatNum;
- (void)writeLinkageRulesToDeviceWithUuid:(NSString * _Nonnull)uuid rule:(NSString * _Nonnull)rule callback:(void (^ _Nonnull)(BOOL))callback;
- (void)writeRulesWithUuid:(NSString * _Nonnull)uuid ruleId:(NSInteger)ruleId rule:(NSString * _Nonnull)rule callback:(void (^ _Nonnull)(BOOL))callback;
- (void)sendWiFiPasswordToDeviceWithUuid:(NSString * _Nonnull)uuid ssid:(NSString * _Nonnull)ssid password:(NSString * _Nonnull)password isUpdate:(BOOL)isUpdate callback:(void (^ _Nonnull)(BOOL))callback;
- (void)groupAddDeviceWithUuid:(NSString * _Nonnull)uuid groups:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)groups callback:(void (^ _Nonnull)(BOOL))callback;
- (void)groupDeleteDeviceWithUuid:(NSString * _Nonnull)uuid groups:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)groups callback:(void (^ _Nonnull)(BOOL))callback;
- (void)resetDeviceGroupSettingWithUuid:(NSString * _Nonnull)uuid groups:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)groups callback:(void (^ _Nonnull)(BOOL))callback;
- (void)subscribeGroupWithUuid:(NSString * _Nonnull)uuid address:(NSInteger)address callback:(void (^ _Nonnull)(BOOL))callback;
@end


@interface MeshSDK (SWIFT_EXTENSION(MeshSDK))
- (void)disconnect;
- (void)connect;
- (void)disconnectWithMac:(NSString * _Nullable)mac;
- (void)connectWithMac:(NSString * _Nullable)mac;
- (void)addMeshProxyWithPeripheral:(CBPeripheral * _Nonnull)peripheral mac:(NSString * _Nonnull)mac;
- (void)switchProxyWithMac:(NSString * _Nonnull)mac;
- (NSString * _Nullable)getCurrentProxyMac SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isConnected SWIFT_WARN_UNUSED_RESULT;
- (void)initDeviceCache SWIFT_METHOD_FAMILY(none);
- (BOOL)checkDeviceIsOnlineWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (void)updateDeviceStatusCacheWithUuid:(NSString * _Nonnull)uuid properties:(NSDictionary<NSString *, id> * _Nonnull)properties;
- (NSDictionary<NSString *, id> * _Nullable)getDeviceCachePropertiesWithUuid:(NSString * _Nonnull)uuid SWIFT_WARN_UNUSED_RESULT;
- (uint16_t)getNextUnicastAddress SWIFT_WARN_UNUSED_RESULT;
- (void)readCurrentGattRssiWithCallback:(void (^ _Nonnull)(CBPeripheral * _Nonnull, NSInteger))callback;
@end


SWIFT_CLASS("_TtC7MeshSDK19UnprovisionedDevice")
@interface UnprovisionedDevice : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif