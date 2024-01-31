@class NSString, NSXPCConnection, NSURL, NSLocale, NSMutableArray;

@interface CESRSpeechProfileBuilder : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_serializedItems;
    NSMutableArray *_isBoosted;
    unsigned long long _summedCommittedItemsMemoryInBytes;
    unsigned long long _uncommittedItemsMemoryInBytes;
}

@property (readonly, nonatomic) NSURL *directory;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) long long dataProtectionClass;

+ (id)speechProfilePathsForLocale:(id)a0;
+ (id)categoryToFieldTypeMap;
+ (BOOL)shouldOverrideDeferralForCategory:(id)a0 updateMode:(unsigned long long)a1;
+ (id)supportedCategories;
+ (id)CESRErrorForXPCError:(id)a0;
+ (id)profileDirPathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (id)categoryToLimitHintMap;
+ (id)profileFilePathFromBasePath:(id)a0 language:(id)a1 userId:(id)a2;
+ (BOOL)deleteProfileAtDirectory:(id)a0 locale:(id)a1 userId:(id)a2 error:(id *)a3;
+ (id)getSpeechLocaleForLocale:(id)a0;
+ (void)deleteLegacyProfiles;

- (void)dealloc;
- (BOOL)cancelCategoriesWithError:(id *)a0;
- (BOOL)addVocabularyItem:(id)a0 isBoosted:(BOOL)a1 error:(id *)a2;
- (unsigned long long)getGlobalItemsMemoryLimitInBytes;
- (BOOL)addVocabularyItem:(id)a0 error:(id *)a1;
- (id)_newConnection;
- (BOOL)beginWithCategoriesAndVersions:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (BOOL)finishAndSaveProfile:(BOOL)a0 error:(id *)a1;
- (BOOL)_setProfileConfigWithLanguage:(id)a0 profileDir:(id)a1 userId:(id)a2 dataProtectionClass:(long long)a3;
- (BOOL)removeExperimentId:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_flushItemsWithError:(id *)a0;
- (id)getExperimentIdsWithError:(id *)a0;
- (BOOL)addExperimentId:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0 locale:(id)a1 userId:(id)a2 dataProtectionClass:(long long)a3;
- (long long)getVersionForCategory:(id)a0 error:(id *)a1;

@end
