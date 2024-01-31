@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
}

@property (copy, nonatomic) id /* block */ buddyDidFinishHandler;

+ (BOOL)isSetupUser;
+ (BOOL)hasPassedBuddy;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)buddyDidFinish;
- (void)checkBuddyStatus;
- (void)createPeriodicPollingTimer;
- (void)stopWithAssertQueue:(BOOL)a0;

@end
