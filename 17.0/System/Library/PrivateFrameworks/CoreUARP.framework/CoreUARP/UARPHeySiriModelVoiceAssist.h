@class NSString, NSURL, UARPSuperBinaryAssetPayload, NSObject, UARPSuperBinaryAsset;
@protocol OS_os_log;

@interface UARPHeySiriModelVoiceAssist : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol> {
    NSObject<OS_os_log> *_log;
    NSURL *_superBinaryMetaDataURL;
    NSURL *_modelMetaDataURL;
    NSURL *_modelDataURL;
    NSURL *_fallbackModelMetaDataURL;
    NSURL *_fallbackModelDataURL;
    UARPSuperBinaryAsset *_asset;
    UARPSuperBinaryAssetPayload *_payloadModel;
    UARPSuperBinaryAssetPayload *_payloadFallbackModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tag;

- (id)init;
- (void).cxx_destruct;
- (void)currentHeySiriModel:(id)a0 fallbackModel:(id)a1 error:(id)a2;
- (id)generateAsset:(id *)a0;
- (BOOL)processDynamicAsset:(id *)a0;

@end
