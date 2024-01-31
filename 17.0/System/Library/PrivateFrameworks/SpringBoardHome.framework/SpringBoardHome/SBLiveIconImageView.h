@interface SBLiveIconImageView : SBIconImageView

- (void)setPaused:(BOOL)a0;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(BOOL)a0;
- (id)snapshot;
- (void)prepareForReuse;
- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (void)updateUnanimated;
- (BOOL)isAnimationAllowed;

@end
