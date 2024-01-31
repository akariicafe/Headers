@class NSString, CARSessionStatus;

@interface MNCarPlayConnectionMonitor : NSObject <CARSessionObserving> {
    CARSessionStatus *_carSessionStatus;
    BOOL _shouldWait;
}

@property (class, readonly, nonatomic) MNCarPlayConnectionMonitor *sharedInstance;

@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnectedSynchronous;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)sessionDidConnect:(id)a0;
- (void).cxx_destruct;
- (void)sessionDidDisconnect:(id)a0;

@end
