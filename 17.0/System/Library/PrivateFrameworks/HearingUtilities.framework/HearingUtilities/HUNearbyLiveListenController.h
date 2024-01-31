@class NSMutableArray, NSString, NSLock;
@protocol HUNearbyLiveListenDeviceImplementation;

@interface HUNearbyLiveListenController : NSObject <HUListenerHelperDelegate>

@property (class, readonly, nonatomic) HUNearbyLiveListenController *sharedInstance;

@property (nonatomic) long long state;
@property (retain, nonatomic) id<HUNearbyLiveListenDeviceImplementation> deviceImplementation;
@property (retain, nonatomic) NSMutableArray *updateBlocks;
@property (retain, nonatomic) NSLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeListener:(id)a0;
- (id)init;
- (void)registerUpdateBlock:(id /* block */)a0 withListener:(id)a1;
- (void).cxx_destruct;
- (void)startLiveListen;
- (BOOL)_updateState:(long long)a0 audioLevel:(float)a1;
- (void)stopLiveListen;

@end
