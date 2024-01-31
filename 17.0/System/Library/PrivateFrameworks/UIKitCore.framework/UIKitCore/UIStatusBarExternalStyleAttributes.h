@interface UIStatusBarExternalStyleAttributes : UIStatusBarNewUIStyleAttributes

- (long long)idiom;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (Class)foregroundStyleClass;
- (double)heightForMetrics:(long long)a0;
- (id)backgroundImageName;
- (long long)tapButtonType;

@end
