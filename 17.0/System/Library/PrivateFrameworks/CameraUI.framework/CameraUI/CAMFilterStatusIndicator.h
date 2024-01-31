@interface CAMFilterStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isOn) BOOL on;

- (BOOL)shouldUseOutline;
- (id)imageNameForCurrentState;
- (id)imageNameForAXHUD;
- (id)imageSymbolColorConfiguration;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
