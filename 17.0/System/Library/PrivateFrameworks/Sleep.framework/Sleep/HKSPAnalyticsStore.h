@protocol HKSPUserDefaults;

@interface HKSPAnalyticsStore : NSObject

@property (readonly, nonatomic) id<HKSPUserDefaults> userDefaults;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;

- (id)initWithUserDefaults:(id)a0;
- (void)markAllActionsAsCollected;
- (id)windDownActionsAfterMorningIndex:(long long)a0;
- (void)_setWindDownActions:(id)a0 forMorningIndex:(long long)a1 overwriteExisting:(BOOL)a2;
- (void)updateWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (void)setBaselineForWindDownActions:(id)a0 onMorningIndex:(long long)a1;
- (void)removeAllWindDownActionsBeforeMorningIndex:(long long)a0;
- (void).cxx_destruct;
- (id)windDownActionsForMorningIndex:(long long)a0;
- (id)readAllWindDownActions;
- (void)writeWindDownActions:(id)a0;
- (id)initWithUserDefaults:(id)a0 diagnosticsOptInStatusProvider:(id /* block */)a1;
- (id)uncollectedWindDownActions;

@end
