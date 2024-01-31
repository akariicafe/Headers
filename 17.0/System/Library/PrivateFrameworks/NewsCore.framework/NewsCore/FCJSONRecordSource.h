@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter;

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
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (id)keyValueRepresentationOfRecord:(id)a0;

@end
