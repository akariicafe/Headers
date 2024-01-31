@interface BRCStagePersistedState : BRCPersistedState {
    long long _latestGCStartTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)a0 options:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLatestGCStartTime:(long long)a0;
- (long long)timeSinceLatestGCStartTime;

@end
