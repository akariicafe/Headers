@class SKUIExpandViewElement, NSMutableArray;

@interface SKUIExpandPageComponent : SKUIPageComponent {
    NSMutableArray *_childComponents;
}

@property (readonly, nonatomic) SKUIExpandViewElement *viewElement;

- (void).cxx_destruct;
- (long long)componentType;
- (id)childComponents;
- (id)childComponentForIndex:(long long)a0;
- (id)initWithViewElement:(id)a0;
- (id)metricsElementName;

@end
