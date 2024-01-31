@class NSString, AXSDListenEngine, AXSDVoiceTriggerModelManager, NSObject;
@protocol OS_dispatch_queue;

@interface AXSDVoiceTriggerController : NSObject <AXSDListenEngineDelegate, AXSDVoiceTriggerModelManagerDelegate> {
    AXSDListenEngine *_listener;
    AXSDVoiceTriggerModelManager *_modelManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _isListening;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;
- (void)_postVoiceTriggerEventToSystem:(long long)a0;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)listeningStoppedWithError:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)startListeningOnQueue:(id)a0;

@end
