@protocol MUVisibleItemsProvider;

@interface MUScrollViewImpressionsCalculator : MUImpressionsCalculator {
    id<MUVisibleItemsProvider> _visibleItemsProvider;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 visibleItemsProvider:(id)a1;
- (void)logImpressions;

@end
