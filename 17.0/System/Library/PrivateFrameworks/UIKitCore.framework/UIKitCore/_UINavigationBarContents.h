@class NSArray, UIView, UINavigationItem, UIBarButtonItem;

@interface _UINavigationBarContents : NSObject

@property (retain, nonatomic) NSArray *viewsRepresentingContentBackground;
@property (retain, nonatomic) UINavigationItem *topItem;
@property (retain, nonatomic) UINavigationItem *backItem;
@property (copy, nonatomic) NSArray *viewsRepresentingBackButton;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *largeTitleView;
@property (retain, nonatomic) UIView *promptView;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *staticBarButtonItem;
@property (copy, nonatomic) NSArray *cancelBarButtonItems;
@property (copy, nonatomic) NSArray *otherBarButtonItems;

- (id)init;
- (void).cxx_destruct;

@end
