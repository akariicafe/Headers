@interface UIStatusBarLockScreenStyleAttributes : UIStatusBarNewUIStyleAttributes

- (BOOL)isLockScreen;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (Class)foregroundStyleClass;
- (double)heightForMetrics:(long long)a0;

@end
