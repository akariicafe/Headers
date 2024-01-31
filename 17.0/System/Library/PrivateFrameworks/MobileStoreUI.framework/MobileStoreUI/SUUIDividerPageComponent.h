@class SUUIDividerViewElement, NSString;

@interface SUUIDividerPageComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUIDividerViewElement *viewElement;
@property (readonly, nonatomic) NSString *dividerTitle;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithDividerTitle:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
