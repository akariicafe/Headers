@class UIColor, SKUIRowViewElement, NSArray;

@interface SKUIRowComponent : SKUIPageComponent {
    long long _missingItemCount;
}

@property (readonly, nonatomic) SKUIRowViewElement *viewElement;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *childComponents;
@property (readonly, nonatomic) NSArray *columnWidths;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) BOOL shouldAutoFlow;

- (id)description;
- (void).cxx_destruct;
- (long long)componentType;
- (id)_childComponentWithContext:(id)a0;
- (BOOL)_isChildMissingItemData:(id)a0;
- (id)_updateWithMissingItems:(id)a0;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithViewElement:(id)a0;
- (BOOL)isMissingItemData;
- (id)metricsElementName;

@end
