@class NSDictionary, NSArray, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject {
    NSMutableDictionary *_records;
}

@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys;
@property (readonly, nonatomic) NSArray *records;

- (void)addRecord:(id)a0;
- (id)initWithRecords:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)recordsWithRecordType:(id)a0;

@end
