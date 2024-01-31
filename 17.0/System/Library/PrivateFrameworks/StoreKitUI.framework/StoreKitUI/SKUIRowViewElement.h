@class NSArray, NSString;

@interface SKUIRowViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
