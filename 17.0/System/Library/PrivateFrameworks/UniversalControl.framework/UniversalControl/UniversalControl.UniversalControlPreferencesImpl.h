@interface UniversalControl.UniversalControlPreferencesImpl : UniversalControl.PreferencesController <UVCPreferencesTestability>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL magicEdgesEnabled;
@property (nonatomic, readonly) BOOL supported;
@property (nonatomic) BOOL automation;

@end
