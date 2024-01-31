@interface MLNNLayerComputeUnitSelectionUtils : NSObject

+ (id)getLayerHints:(id)a0 error:(id *)a1;
+ (id)getLayerTypes:(id)a0 error:(id *)a1;
+ (id)getNetJson:(id)a0 error:(id *)a1;
+ (BOOL)undoLastHintUpdate:(id)a0 error:(id *)a1;
+ (BOOL)updateHints:(id)a0 hints:(id)a1 error:(id *)a2;

@end
