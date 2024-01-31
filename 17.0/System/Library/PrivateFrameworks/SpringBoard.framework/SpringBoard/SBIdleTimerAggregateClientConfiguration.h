@class NSString, SBIdleTimerTimeoutPrecedenceSettings, SBIdleTimerTimeoutRange, SBIdleTimerConfigurationDisablesTimerSetting;

@interface SBIdleTimerAggregateClientConfiguration : NSObject <BSDescriptionProviding> {
    SBIdleTimerTimeoutRange *_resolvedExpirationTimeoutRange;
}

@property (readonly, nonatomic) SBIdleTimerConfigurationDisablesTimerSetting *disableTimerSetting;
@property (readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *minExpirationTimeoutSettings;
@property (readonly, nonatomic) SBIdleTimerTimeoutPrecedenceSettings *maxExpirationTimeoutSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)setDisablesTimerWithPrecedence:(unsigned long long)a0;
- (id)expirationTimeoutIntervalRangeForPrecedence:(unsigned long long)a0;
- (id)resolvedExpirationTimeoutRange;
- (void)setMaxExpirationTimeout:(double)a0 ifLeastForPrecedence:(unsigned long long)a1;
- (void)setMaxExpirationTimeout:(double)a0 withPrecedence:(unsigned long long)a1;
- (void)setMinExpirationTimeout:(double)a0 ifGreatestForPrecedence:(unsigned long long)a1;
- (void)setMinExpirationTimeout:(double)a0 withPrecedence:(unsigned long long)a1;

@end
