@interface CAMDrawerFilterButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)isSelfExpanding;
- (id)imageSymbolColorConfiguration;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
