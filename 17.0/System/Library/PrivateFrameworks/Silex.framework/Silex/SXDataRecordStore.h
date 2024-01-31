@class NSArray;

@interface SXDataRecordStore : NSObject

@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSArray *descriptors;

- (id)initWithRecords:(id)a0 andDescriptors:(id)a1;
- (unsigned long long)numberOfRecords;
- (id)recordsUsingSortDescriptors:(id)a0;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (void).cxx_destruct;

@end
