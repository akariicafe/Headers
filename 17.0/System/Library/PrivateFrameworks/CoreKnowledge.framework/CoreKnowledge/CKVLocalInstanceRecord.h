@class NSNumber, NSString;

@interface CKVLocalInstanceRecord : NSObject <CKVDatabaseRecord>

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) NSNumber *itemIdHash;
@property (readonly, nonatomic) NSNumber *provenanceRowId;
@property (readonly, nonatomic) NSNumber *modified;
@property (readonly, nonatomic) NSNumber *ordinal;
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
