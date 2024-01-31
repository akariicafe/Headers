@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

@property (nonatomic) long long timerDuration;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
