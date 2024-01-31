@class HKSPSleepStore, NSString, _HKBehavior;
@protocol HKSPSleepModeButtonModelDelegate;

@interface HKSPSleepModeButtonModel : NSObject <HKSPSleepStorePrivateObserver>

@property (readonly, weak, nonatomic) id<HKSPSleepModeButtonModelDelegate> delegate;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepStore:(id)a0 sleepModeOnDidChange:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_checkSleepModeState;
- (void)_launchAppForOnboarding;
- (void)_queue_updateStateWithSleepMode:(long long)a0;
- (void)_updateStateWithSleepMode:(long long)a0;
- (id)initWithSleepStore:(id)a0 delegate:(id)a1 behavior:(id)a2;

@end
