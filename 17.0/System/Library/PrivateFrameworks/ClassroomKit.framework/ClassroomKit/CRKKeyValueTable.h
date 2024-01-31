@class NSArray, CRKTable;

@interface CRKKeyValueTable : NSObject <CRKTablePrinting>

@property (readonly, copy, nonatomic) NSArray *keyValuePairs;
@property (readonly, nonatomic) CRKTable *table;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyValuePairs:(id)a0;
- (id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)a0 sortKeys:(BOOL)a1;
- (id)tableString;

@end
