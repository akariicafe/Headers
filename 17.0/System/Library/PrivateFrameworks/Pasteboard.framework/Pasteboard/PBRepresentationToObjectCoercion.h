@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBRepresentationToObjectCoercion : NSObject

@property (retain, nonatomic) Class theClass;
@property (retain, nonatomic) NSMutableDictionary *blockByType;
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder;

- (id)initWithClass:(Class)a0;
- (void).cxx_destruct;
- (void)addCoercionFromType:(id)a0 block:(id /* block */)a1;
- (id)availableImportTypes;
- (BOOL)canCoerceFromType:(id)a0;
- (id)createObjectFromRepresentationConformingToType:(id)a0 data:(id)a1 URL:(id)a2 outError:(id *)a3;

@end
