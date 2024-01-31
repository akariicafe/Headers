@class SBIdleTimerDescriptor, NSString, ITAttentionAwareIdleTimer;

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding> {
    ITAttentionAwareIdleTimer *_attentionAwareTimer;
}

@property (nonatomic) double timeMultiplier;
@property (nonatomic) unsigned long long expectation;
@property (nonatomic) BOOL requiresManualReset;
@property (copy, nonatomic) SBIdleTimerDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (double)_effectiveTimeoutForBaseTimeout:(double)a0;
- (BOOL)isDisabled;
- (void)idleTimerDidReset:(id)a0 forUserAttention:(unsigned long long)a1 at:(double)a2;
- (id)_initWithAttentionAwareTimer:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)stateCaptureDescriptionWithMultilinePrefix:(id)a0;
- (void)setActivated:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isActivated;
- (void)idleTimer:(id)a0 attentionLostTimeoutDidExpire:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (double)_effectiveWarnTimeoutDuration;
- (void).cxx_destruct;
- (double)_effectiveExpireTimeoutDuration;
- (id)succinctDescription;
- (id)initWithConfigurationIdentifier:(id)a0;
- (void)_resetExpectation;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)a0;
- (void)_reconfigureAttentionClientAndReset:(BOOL)a0;
- (void)_stopIfManual;

@end
