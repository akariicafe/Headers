@class NSSet, NSMutableDictionary, NSDictionary;

@interface HMBLocalSQLContextQueryTable : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *mutableIndexes;
@property (readonly, nonatomic) NSSet *columnNames;
@property (readonly, nonatomic) NSDictionary *indexes;

- (id)initWithColumnNames:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
