@interface SiriUIHelpButton : SiriUIContentButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

+ (id)buttonWithHelpImageMask;

- (void)setEmphasized:(BOOL)a0;
- (void)pulse;
- (double)_targetAlpha;

@end
