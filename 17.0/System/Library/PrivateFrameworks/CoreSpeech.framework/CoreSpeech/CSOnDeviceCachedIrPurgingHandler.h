@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCachedIrPurgingHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)voiceTriggerAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;
- (void)cleanUpCachedIrDir;
- (void)cleanUpPreviousBuildBnnsIrInCachedIrDir:(id)a0;
- (void)cleanUpWithCachedIrDir:(id)a0;
- (void)purgeCachedIrForTrialAssetExcludingCurrentAsset:(id)a0 cachedIrDir:(id)a1;
- (void)startRegistration;

@end
