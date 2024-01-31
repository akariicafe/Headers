@class SUUIImageViewElement, NSString;

@interface SUUIBrowseItemComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUIImageViewElement *decorationImage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (nonatomic) long long index;
@property (nonatomic) BOOL showTopBorder;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)a0;

@end
