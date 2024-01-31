@class CNAutocompleteResultFactory, NSMutableArray;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject {
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
}

@property unsigned long long builtContactType;

+ (long long)addressTypeForProperty:(id)a0;
+ (id)localContactBuilderWithResultFactory:(id)a0;
+ (id)resultValueForContactPropertyValue:(id)a0 propertyKey:(id)a1 contact:(id)a2;
+ (id)serverContactBuilderWithResultFactory:(id)a0;
+ (id)suggestedContactBuilderWithResultFactory:(id)a0;

- (id /* block */)build;
- (void).cxx_destruct;
- (void)addTransformForProperty:(id)a0;
- (id /* block */)buildAggregateTransform;
- (id)initWithResultFactory:(id)a0;
- (id /* block */)makeTransformForProperty:(id)a0;

@end
