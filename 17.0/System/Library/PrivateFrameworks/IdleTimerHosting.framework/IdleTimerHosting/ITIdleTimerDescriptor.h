@class NSArray, NSString;

@interface ITIdleTimerDescriptor : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long attentionMaintenanceEventMask;
@property (readonly, nonatomic) unsigned long long attentionRecoveryEventMask;
@property (nonatomic) double attentionSamplingPeriod;
@property (nonatomic) double attentionSamplingStartDelay;
@property (nonatomic) double attentionSamplingStartBeforeFirstTimeout;
@property (copy, nonatomic) NSArray *timeouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)setAttentionEventMaintenanceMask:(unsigned long long)a0 recoveryMask:(unsigned long long)a1;
- (id)succinctDescription;
- (void)setAttentionEventMask:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
