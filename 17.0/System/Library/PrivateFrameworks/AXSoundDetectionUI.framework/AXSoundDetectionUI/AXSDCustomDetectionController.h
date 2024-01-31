@class NSString, AXSDKShotModelManager, AXSDListenEngine;

@interface AXSDCustomDetectionController : NSObject <AXSDListenEngineDelegate, AXSDKShotModelManagerDelegate> {
    AXSDListenEngine *_listener;
}

@property (retain, nonatomic) AXSDKShotModelManager *modelManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;
- (void)addCustomDetector:(id)a0;
- (id)currentCustomDetectors;
- (void)listenEngineDidStartWithInputFormat:(id)a0;
- (void)listenEngineFailedToStartWithError:(id)a0;
- (void)receivedBuffer:(id)a0 atTime:(id)a1;
- (void)receivedCompletion:(id)a0;
- (void)receivedError:(id)a0 fromDetector:(id)a1;
- (void)receivedObservation:(id)a0 forDetector:(id)a1;
- (void)removeAllListenTypes;
- (void)removeCustomDetector:(id)a0;

@end
