@interface FCIssueRecordSource : FCRecordSource

+ (BOOL)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;

- (id)localizableKeys;
- (id)recordIDPrefixes;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordType;

@end
