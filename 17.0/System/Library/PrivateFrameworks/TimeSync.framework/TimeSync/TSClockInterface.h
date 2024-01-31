@class TSClock, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TSClockInterface : NSObject <TSClockClient> {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    void /* function */ *_lockStateCallback;
    void *_lockStateRefcon;
    void /* function */ *_masterChangeCallback;
    void *_masterChangeRefcon;
    void /* function */ *_timeSyncTimeChangeCallback;
    void *_timeSyncTimeChangeRefcon;
    void /* function */ *_gptpGrandmasterCallback;
    void *_gptpGrandmasterRefcon;
    void /* function */ *_gptpGrandmasterPortCallback;
    void *_gptpGrandmasterPortRefcon;
    void /* function */ *_gptpLocalPortCallback;
    void *_gptpLocalPortRefcon;
}

@property (retain, nonatomic) TSClock *clock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didEndClockGrandmasterChangeForClock:(id)a0;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)setLockStateNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setMasterChangeNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setTimeSyncTimeChangeNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setgPTPGrandmasterIDAndPortNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setgPTPGrandmasterNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)setgPTPLocalPortNotificationCallback:(void /* function */ *)a0 refcon:(void *)a1;

@end
