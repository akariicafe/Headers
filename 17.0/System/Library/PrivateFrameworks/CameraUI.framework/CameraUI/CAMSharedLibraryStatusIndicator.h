@interface CAMSharedLibraryStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setSharedLibraryMode:) long long sharedLibraryMode;

- (id)imageNameForCurrentState;
- (unsigned long long)customPointSizeForImageSymbol;
- (void)setSharedLibraryMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
