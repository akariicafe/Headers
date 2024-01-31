@interface FCTagListRecordSource : FCRecordSource

- (id)recordIDPrefixes;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordType;

@end
