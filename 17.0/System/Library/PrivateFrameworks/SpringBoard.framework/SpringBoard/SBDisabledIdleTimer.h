@interface SBDisabledIdleTimer : SBIdleTimerBase {
    BOOL _activated;
}

- (void)reset;
- (BOOL)isDisabled;
- (void)setActivated:(BOOL)a0;
- (BOOL)isActivated;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
