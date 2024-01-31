@class SUUIShelfViewElement;

@interface SUUIShelfPageComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUIShelfViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
