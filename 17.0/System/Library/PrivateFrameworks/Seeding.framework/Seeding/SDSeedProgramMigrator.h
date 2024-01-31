@interface SDSeedProgramMigrator : NSObject

+ (BOOL)_enrollInSeedProgram:(long long)a0;
+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_removeObsoleteAudiences;
+ (void)_removeObsoleteCatalogs;
+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end
