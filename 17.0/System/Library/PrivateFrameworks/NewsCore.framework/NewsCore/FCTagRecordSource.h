@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

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
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 experimentalizableFieldsPostfix:(id)a4 activeTreatmentID:(id)a5;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 desiredTagRecordFieldOptions:(unsigned long long)a4;
- (id)experimentalizableKeys;
- (void).cxx_destruct;
- (id)localizableLanguageSpecificKeys;
- (id)saveTagRecords:(id)a0;
- (id)localizableExperimentalizableKeys;

@end
