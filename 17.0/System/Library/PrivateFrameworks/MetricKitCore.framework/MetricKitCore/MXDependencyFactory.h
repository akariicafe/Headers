@class MXCleanUtil, MXDateUtil, MXPayloadValidator;
@protocol MXClientUtilProtocol, MXDeliveryDataCacherProtocol, MXDiagnosticServicesProtocol, MXSourceDataCacherProtocol, MXBundleUtilProtocol, MXSourcePathUtilProtocol, MXDeliveryPathUtilProtocol, MXMetricServicesProtocol, MXStorageUtilProtocol;

@interface MXDependencyFactory : NSObject

@property (readonly) id<MXStorageUtilProtocol> storageUtil;
@property (readonly) MXDateUtil *dateUtil;
@property (readonly) id<MXSourcePathUtilProtocol> sourcePathUtil;
@property (readonly) id<MXSourceDataCacherProtocol> sourceDataCacher;
@property (readonly) id<MXMetricServicesProtocol> metricServices;
@property (readonly) id<MXDiagnosticServicesProtocol> diagnosticServices;
@property (readonly) id<MXBundleUtilProtocol> bundleUtil;
@property (readonly) id<MXDeliveryPathUtilProtocol> deliveryPathUtil;
@property (readonly) id<MXDeliveryDataCacherProtocol> deliveryDataCacher;
@property (readonly) id<MXClientUtilProtocol> clientUtil;
@property (readonly) MXCleanUtil *cleanUtil;
@property (readonly) MXPayloadValidator *payloadValidator;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)handlerForMXSourceWithDelegate:(id)a0;
- (void)_initIvar;
- (id)handlerForMXCoreWithDelegate:(id)a0;

@end
