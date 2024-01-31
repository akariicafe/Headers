@class CDMNluResponse, NSString, NSObject, CDMClient;
@protocol OS_dispatch_semaphore;

@interface LRRCdmClient : NSObject <CDMClientDelegate> {
    CDMClient *cdmClient;
    NSObject<OS_dispatch_semaphore> *semaphoreProcessNluRequest;
    NSObject<OS_dispatch_semaphore> *semaphoreSetup;
    CDMNluResponse *replayedNluResponse;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)processCDMNluRequestCallback:(id)a0;
- (void)processCDMNluRequestErrorCallback:(id)a0 error:(id)a1;
- (id)replayRequestProto:(id)a0 proto:(id)a1 outError:(id *)a2;
- (BOOL)setup:(id)a0 rawSpeechProfile:(id)a1 rawSpeechProfileMetadata:(id)a2 assetDirPath:(id)a3 overrideSiriVocabSpans:(id)a4;
- (void)stopWatchingCdmClientSetup;
- (void)watchCdmClientSetup;

@end
