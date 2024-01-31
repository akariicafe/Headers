@class NSMutableArray;

@interface TSCECellValueCombinator : NSObject {
    NSMutableArray *_valuesForDimension;
}

- (void).cxx_destruct;
- (void)enumerateCombinationsWithBlock:(id /* block */)a0;
- (void)addValuesForDimension:(id)a0;

@end
