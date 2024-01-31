@interface MCProfileStateHandler : MCStateHandler

+ (void)addProfileRestrictionsStateHandler;
+ (void)addProfileSettingsStateHandler;
+ (id)restrictionsStateDictionaryWithDetailsIncluded:(BOOL)a0;
+ (id)settingsStateDictionaryWithDetailsIncluded:(BOOL)a0;

@end
