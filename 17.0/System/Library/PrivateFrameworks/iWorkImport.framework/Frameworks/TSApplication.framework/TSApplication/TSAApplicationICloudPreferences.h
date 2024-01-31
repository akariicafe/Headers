@interface TSAApplicationICloudPreferences : TSKApplicationICloudPreferences

@property (readonly, nonatomic) BOOL hasIWorkAuthorName;

- (id)iWorkAuthorName;
- (void)clearICloudDocumentPreferences;
- (void)clearIWorkAuthorColorIndex;
- (void)clearIWorkAuthorName;
- (void)clearIWorkAuthorPrivateID;
- (unsigned long long)collaboratorColorIndexForKvsDocumentKey:(id)a0;
- (id)collaboratorNameForDocumentInfo:(id)a0 firstName:(id *)a1 lastName:(id *)a2;
- (id)documentPreferenceKeyPrefix;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)a0 isMatchingKey:(BOOL *)a1;
- (id)iCloudPreferenceKeys;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iWorkAuthorPrivateIDsAndMetadata;
- (BOOL)isICloudDocumentPreference:(id)a0 validForKey:(id)a1;
- (BOOL)isValidIWorkAuthorColorIndex:(unsigned long long)a0;
- (void)p_ubiquitousKeyValueStoreDidChange:(id)a0;
- (id)preferencesForKvsDocumentKey:(id)a0;
- (void)registerICloudPreferences;
- (void)setIWorkAuthorColorIndex:(unsigned long long)a0;
- (void)setIWorkAuthorName:(id)a0;
- (void)setIWorkAuthorPrivateIDsAndMetadata:(id)a0;
- (void)setPreferences:(id)a0 forKvsDocumentKey:(id)a1;
- (id)validICloudPreferencesForPreferences:(id)a0 invalidKeys:(id *)a1;

@end
