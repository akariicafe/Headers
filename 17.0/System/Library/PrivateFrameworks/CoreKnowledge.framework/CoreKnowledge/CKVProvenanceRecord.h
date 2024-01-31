@class NSNumber, NSString;

@interface CKVProvenanceRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *provenanceRowId;
@property (readonly, nonatomic) NSNumber *deviceRowId;
@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSNumber *contentHash;
@property (readonly, nonatomic) NSNumber *instanceHash;
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic) NSNumber *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)genSQLCreateStatements;
+ (id)recordFromDatabaseValueRow:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDatabaseValueRow:(id)a0;
- (BOOL)isEqualToItemRecord:(id)a0;

@end
