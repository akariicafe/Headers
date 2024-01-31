@class NSString;

@interface ACMAuthContext : ACCAuthContext

@property (retain) NSString *userPreferences;

- (void)dealloc;
- (BOOL)isDevicePwnd;
- (id)parametersDictionary;

@end
