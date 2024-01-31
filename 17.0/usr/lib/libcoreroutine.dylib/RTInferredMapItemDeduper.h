@interface RTInferredMapItemDeduper : NSObject

@property (readonly, copy, nonatomic) id /* block */ deduperFunction;

- (id)init;
- (void).cxx_destruct;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)a0 error:(id *)a1;
- (id)dedupeDoubleArrayOfInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;
- (id)dedupeInferredMapItems:(id)a0 error:(id *)a1;
- (id)dedupeInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;
- (BOOL)inferredMapItem:(id)a0 dedupesToInferredMapItem:(id)a1 error:(id *)a2;
- (id)ingestInferredMapItem:(id)a0 state:(id)a1 error:(id *)a2;
- (id)ingestInferredMapItems:(id)a0 state:(id)a1 error:(id *)a2;
- (id)initWithDeduperFunction:(id /* block */)a0;

@end
