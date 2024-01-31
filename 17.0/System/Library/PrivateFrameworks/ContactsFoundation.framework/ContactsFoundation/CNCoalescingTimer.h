@class CNUnfairLock, NSObject;
@protocol OS_os_log, CNScheduler, CNCancelable;

@interface CNCoalescingTimer : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (retain, nonatomic) id<CNCancelable> scheduledToken;
@property (readonly, nonatomic) CNUnfairLock *resourceLock;
@property (readonly, nonatomic) id<CNScheduler> delayScheduler;
@property (readonly, nonatomic) id<CNScheduler> downstreamScheduler;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) BOOL open;
@property (nonatomic, getter=isSomeoneWaiting) BOOL someoneWaiting;

- (BOOL)nts_isDoorOpened;
- (void)dealloc;
- (void)nts_letSomeoneIn;
- (void)handleEvent;
- (id)initWithDelay:(double)a0 options:(unsigned long long)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (void)nts_makeSomeoneWait;
- (id)initWithDelay:(double)a0 options:(unsigned long long)a1 block:(id /* block */)a2 schedulerProvider:(id)a3 downstreamScheduler:(id)a4;
- (void)nts_openDoor;
- (void)nts_closeDoor;

@end
