@interface CAMVideoStabilizationStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setVideoStabilizationMode:) long long videoStabilizationMode;

- (id)imageNameForCurrentState;
- (id)imageNameForAXHUD;
- (void)setVideoStabilizationMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
