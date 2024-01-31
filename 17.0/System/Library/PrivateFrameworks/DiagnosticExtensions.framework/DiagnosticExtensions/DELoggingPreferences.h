@interface DELoggingPreferences : NSObject

+ (id)managedLoggingProfilesDirectory;
+ (id)_subsystemPayloadForURL:(id)a0 error:(id *)a1;
+ (id)combinedLoggingPayloadForURLs:(id)a0 error:(id *)a1;
+ (void)installLoggingProfile:(id)a0 sessionIdentifier:(id)a1 extensionIdentifier:(id)a2 error:(id *)a3;
+ (id)loggingPayloadForURL:(id)a0 error:(id *)a1;
+ (id)managedLoggingProfilesDirectoryForSessionIdentifier:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
+ (unsigned long long)numberOfManagedLoggingPreferences;
+ (id)removeLoggingProfileForSessionIdentifier:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;

@end
