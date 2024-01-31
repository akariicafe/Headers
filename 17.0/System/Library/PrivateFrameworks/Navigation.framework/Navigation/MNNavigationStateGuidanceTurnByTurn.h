@interface MNNavigationStateGuidanceTurnByTurn : MNNavigationStateGuidance

- (void)setGuidanceType:(unsigned long long)a0;
- (unsigned long long)type;
- (void)postEnterState;
- (void)setFullGuidanceMode:(BOOL)a0;

@end
