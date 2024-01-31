@interface SHRotatingInstallationID : NSObject

+ (id)creationDate;
+ (void)setCreationDate:(id)a0;
+ (id)cachedInstallationIDWithMaxAge:(double)a0;
+ (id)cachedInstallationForDays:(long long)a0;
+ (id)cachedInstallationIDForUTCDay;
+ (id)installationID;
+ (void)setInstallationID:(id)a0;

@end
