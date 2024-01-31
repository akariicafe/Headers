@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
    NSMutableDictionary *_zoneNameToRecords;
}

- (void)addRecord:(id)a0;
- (id)init;
- (id)allRecords;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeIdentifiers:(id)a0;

@end
