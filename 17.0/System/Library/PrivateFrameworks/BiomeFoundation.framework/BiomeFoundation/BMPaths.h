@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *localComputeDirectory;
@property (class, readonly) NSString *localFlexibleStorageDirectory;
@property (class, readonly) NSString *syncDirectory;

+ (id)pathComponentForStreamType:(unsigned long long)a0;
+ (id)sharedSyncDirectoryForDomain:(unsigned long long)a0;
+ (id)pathForResource:(id)a0;
+ (id)computeDirectoryForDomain:(unsigned long long)a0;
+ (id)_biomeSystemDataDirectory;
+ (BOOL)isTestPathOverridden;
+ (id)_systemRoot;
+ (id)privacyURLToString:(id)a0;
+ (id)pathForResource:(id)a0 ofType:(unsigned long long)a1;
+ (id)pathForDatabase:(id)a0;
+ (id)_pathForTesting;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (id)_biomeDirectoryForDomain:(unsigned long long)a0 options:(unsigned long long)a1;
+ (void)unsetBasePathForTesting;
+ (id)pathForSharedSyncUserIdentifier:(id)a0 streamType:(unsigned long long)a1 domain:(unsigned long long)a2;
+ (id)optionalBiomeDirectoryForDomainUser;
+ (id)biomeDirectoryForDomain:(unsigned long long)a0;
+ (id)databaseDirectoryForDomain:(unsigned long long)a0;
+ (BOOL)getServiceDomain:(unsigned long long *)a0 subpath:(id *)a1 forPath:(id)a2;
+ (BOOL)pathIsManaged:(id)a0 domain:(unsigned long long *)a1;
+ (id)privacyPathname:(id)a0;
+ (id)pathForStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)pathForSharedCurrentAccountStreamType:(unsigned long long)a0 domain:(unsigned long long)a1;
+ (id)biomeTemporaryDirectoryForDomain:(unsigned long long)a0;
+ (id)_biomeUserDataDirectory:(unsigned long long)a0;
+ (id)_pathForLibraryStreamWithDomain:(unsigned long long)a0;
+ (id)_userHome;

@end
