@interface SOKerberosSettingsManager : NSObject

- (id)init;
- (BOOL)createKerberosSettingsCache;
- (void)saveKerberosValuesForProfile:(id)a0;

@end
