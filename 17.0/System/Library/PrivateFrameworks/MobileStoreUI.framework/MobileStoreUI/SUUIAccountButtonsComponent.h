@class SUUILink, SUUIAccountButtonsViewElement;

@interface SUUIAccountButtonsComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUIAccountButtonsViewElement *viewElement;
@property (retain, nonatomic) SUUILink *ECommerceLink;
@property (nonatomic) BOOL hidesTermsAndConditions;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithViewElement:(id)a0;

@end
