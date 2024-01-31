@class SKUICollectionDOMFeature;

@interface SKUIGridViewElement : SKUIViewElement {
    id _persistenceKey;
}

@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic) BOOL showsEditMode;
@property (readonly, nonatomic) SKUICollectionDOMFeature *collectionFeature;

+ (id)supportedFeatures;

- (id)persistenceKey;
- (void).cxx_destruct;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)a0 limit:(long long)a1;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
