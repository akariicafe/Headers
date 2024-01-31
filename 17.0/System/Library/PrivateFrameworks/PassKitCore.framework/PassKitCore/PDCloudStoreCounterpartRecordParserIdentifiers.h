@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}

- (id)init;
- (id)allRecords;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeIdentifiers:(id)a0;
- (void)addRecord:(id)a0 identifier:(id)a1;
- (id)allRecordsWithIdentifier:(id)a0;

@end
