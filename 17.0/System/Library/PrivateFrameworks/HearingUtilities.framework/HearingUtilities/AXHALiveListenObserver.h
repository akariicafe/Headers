@class NSString, AXHALiveListenController, AXDispatchTimer, NSMutableArray, NSLock;

@interface AXHALiveListenObserver : NSObject <HUListenerHelperDelegate, AXHALiveListenDelegate>

@property (retain, nonatomic) AXHALiveListenController *controller;
@property (retain, nonatomic) AXDispatchTimer *liveListenLevelsTimer;
@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) NSLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeListener:(id)a0;
- (id)initWithController:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 withListener:(id)a1;
- (void).cxx_destruct;
- (void)_notifyListenersAndPollAudioLevelIfLiveListenIsRunning;
- (void)_notifyListenersWithIsListening:(BOOL)a0 audioLevel:(float)a1;
- (void)_pollLiveListenAudioLevelAfterDelay;
- (void)liveListenControllerStateDidChange;

@end
