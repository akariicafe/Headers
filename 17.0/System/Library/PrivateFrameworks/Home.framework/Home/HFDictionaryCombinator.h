@class NSSet;

@interface HFDictionaryCombinator : NSObject

@property (copy, nonatomic) NSSet *keysToReconcile;
@property (copy, nonatomic) NSSet *keysToSkip;

+ (BOOL)_isKindOfContainerClass:(id)a0;

- (void).cxx_destruct;
- (id)_mergeVal1:(id)a0 withVal2:(id)a1;
- (void)_reconcileKey:(id)a0 fromDictionary:(id)a1 andDictionary:(id)a2 intoResultDictionary:(id)a3 withReconcilationHandler:(id /* block */)a4;
- (id)combineResultDictionary:(id)a0 withResultDictionary:(id)a1 reconcilationHandler:(id /* block */)a2;

@end
