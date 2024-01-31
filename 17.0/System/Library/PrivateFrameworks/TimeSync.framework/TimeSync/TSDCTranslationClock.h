@class NSString, TSXTranslationClock, TSDClockSync, TSDKernelClock;

@interface TSDCTranslationClock : NSObject <TSDClockSyncGeneralSyncClient, TSDKernelClockClient> {
    TSDClockSync *_clockSync;
}

@property (readonly, nonatomic) TSDKernelClock *translationKernelClock;
@property (readonly, nonatomic) TSXTranslationClock *translationClock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)getInitialSyncInfo;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;

@end
