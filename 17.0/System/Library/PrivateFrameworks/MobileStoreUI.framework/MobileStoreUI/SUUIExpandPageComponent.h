@class SUUIExpandViewElement, NSMutableArray;

@interface SUUIExpandPageComponent : SUUIPageComponent {
    NSMutableArray *_childComponents;
}

@property (readonly, nonatomic) SUUIExpandViewElement *viewElement;

- (void).cxx_destruct;
- (long long)componentType;
- (id)childComponents;
- (id)childComponentForIndex:(long long)a0;
- (id)initWithViewElement:(id)a0;
- (id)metricsElementName;

@end
