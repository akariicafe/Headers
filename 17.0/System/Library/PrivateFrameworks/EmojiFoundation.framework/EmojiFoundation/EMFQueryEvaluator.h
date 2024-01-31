@class EMFQueryResultOverrideList, EMFInvertedIndex;

@interface EMFQueryEvaluator : NSObject

@property (readonly, nonatomic) EMFInvertedIndex *index;
@property (retain, nonatomic) EMFQueryResultOverrideList *overrideList;

- (id)initWithIndex:(id)a0;
- (id)performQuery:(id)a0;
- (void).cxx_destruct;
- (id)_overriddenResultsForQuery:(id)a0;
- (id)initWithIndex:(id)a0 andOverrideList:(id)a1;

@end
