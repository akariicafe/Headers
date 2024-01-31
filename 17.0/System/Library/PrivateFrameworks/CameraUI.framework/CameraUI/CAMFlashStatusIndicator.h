@interface CAMFlashStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isFlashActive) BOOL flashActive;
@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable;

- (id)imageNameForCurrentState;
- (struct CGVector { double x0; double x1; })imageOffset;
- (id)imageNameForAXHUD;
- (id)imageSymbolColorConfiguration;
- (void)setFlashMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
