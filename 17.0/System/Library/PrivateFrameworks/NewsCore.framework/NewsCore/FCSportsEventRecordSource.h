@interface FCSportsEventRecordSource : FCRecordSource

+ (id)recordIDPrefixes;
+ (id)defaultCachePolicy;
+ (BOOL)recognizesRecordID:(id)a0;

- (id)localizableKeys;
- (id)recordIDPrefixes;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordType;
- (id)localizableLanguageSpecificKeys;

@end
