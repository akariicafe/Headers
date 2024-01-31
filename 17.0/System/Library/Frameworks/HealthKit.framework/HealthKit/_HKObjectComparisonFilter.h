@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter {
    BOOL _compareForLocalDevice;
    NSString *_devicePropertyName;
    NSString *_metadataKey;
}

+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedDevicePropertyKey:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (BOOL)allowsEmptyContainerValuesForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;

- (void).cxx_destruct;
- (BOOL)_acceptsDataObjectWithMetadata:(id)a0;
- (BOOL)_acceptsDataObjectComparingDeviceProperty:(id)a0;
- (BOOL)_acceptsDataObjectWithAppleWatchSource:(id)a0;
- (BOOL)_acceptsDataObjectWithContributor:(id)a0;
- (BOOL)_acceptsDataObjectWithCreationTime:(double)a0;
- (BOOL)_acceptsDataObjectWithSource:(id)a0;
- (BOOL)_acceptsDataObjectWithValue:(id)a0;
- (void)_configureForKeyPathDeviceProperty;
- (void)_configureForKeyPathSource;
- (void)_configureForMetdataKeyPath;
- (BOOL)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
