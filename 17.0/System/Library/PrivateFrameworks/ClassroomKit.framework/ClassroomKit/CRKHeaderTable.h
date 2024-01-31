@class NSArray, CRKTable;

@interface CRKHeaderTable : NSObject <CRKTablePrinting>

@property (readonly, copy, nonatomic) NSArray *headers;
@property (readonly, copy, nonatomic) NSArray *keyPaths;
@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, nonatomic) CRKTable *table;

- (void).cxx_destruct;
- (id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)a0 sortKeys:(BOOL)a1;
- (id)initWithHeaders:(id)a0 keyPaths:(id)a1 objects:(id)a2;
- (id)tableString;

@end
