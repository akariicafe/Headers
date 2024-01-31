@class UITabBarButton, UITabBarItem;

@interface UITabBarItemProxy : NSObject {
    UITabBarItem *_item;
    UITabBarButton *_view;
}

- (id)view;
- (void).cxx_destruct;
- (id)item;
- (void)setSelected:(BOOL)a0;
- (id)initWithItem:(id)a0 inTabBar:(id)a1;

@end
