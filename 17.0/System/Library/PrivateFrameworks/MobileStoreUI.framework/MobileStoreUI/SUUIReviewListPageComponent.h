@class SUUIReviewListViewElement;

@interface SUUIReviewListPageComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUIReviewListViewElement *viewElement;

- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
