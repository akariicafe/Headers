@class NSString, NSCountedSet, NSHashTable;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {
    BOOL _killActivity;
    BOOL _itemIsDisabled[46];
    BOOL _itemWasDisabled[46];
    NSCountedSet *_itemDisabledRequests[46];
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;
    BOOL _timeEnabled;
    BOOL _statusBarTimeRequiresUpdate;
    BOOL _timeCloaked;
    BOOL _allButBatteryCloaked;
    BOOL _telephonyAndBluetoothCloaked;
}

@property (retain, nonatomic) NSHashTable *contentAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)updateTimeEnabledImmediately:(BOOL)a0;
- (void)dealloc;
- (void)relinquishContentAssertion:(id)a0;
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)a0;
- (void)forceUpdateLocalStatusBarData;
- (void)updateTimeEnabled;
- (void)statusBarStateProvider:(id)a0 didPostStatusBarData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a1 withActions:(int)a2;
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)a0;
- (BOOL)isTimeEnabled;
- (void)acquireContentAssertion:(id)a0;
- (void).cxx_destruct;
- (void)setTimeCloaked:(BOOL)a0;
- (void)enableTime:(BOOL)a0 crossfade:(BOOL)a1 crossfadeDuration:(double)a2;
- (void)setTelephonyAndBluetoothItemsCloaked:(BOOL)a0;
- (void)_enableTime:(BOOL)a0 crossfade:(BOOL)a1 crossfadeDuration:(double)a2 immediately:(BOOL)a3;
- (void)setAllItemsExceptBatteryCloaked:(BOOL)a0;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)a0;
- (void)disableDataUpdateAnimationsForRequestor:(id)a0;
- (void)didUpdateContentAssertion:(id)a0;
- (void)enableStatusBarItem:(int)a0 requestor:(id)a1;
- (BOOL)_shouldPostForVisitedItem:(int)a0 withUpdates:(BOOL)a1 toAggregatorData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a2 lastPost:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a3;
- (void)disableStatusBarItem:(int)a0 requestor:(id)a1;
- (void)_updateDisabledItems;
- (id)_identifierForStateAggregator:(id)a0;
- (BOOL)contentAssertionsWantTimeEnabledAnimated:(inout BOOL *)a0 duration:(inout double *)a1;
- (void)_composePostDataFromAggregatorData:(struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a0;
- (void)enableTime:(BOOL)a0;

@end
