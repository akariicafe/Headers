@class WFSecuredPreferences;

@interface WFScriptingActionResource : WFResource

@property (readonly, nonatomic) WFSecuredPreferences *securedPreferences;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)preferencesUpdated:(id)a0;
- (void)refreshAvailability;

@end
