@class UIColor, UIView;

@interface VideosExtrasNavigationBarButton : UIButton {
    UIView *_backdropView;
    UIColor *_dodgeColor;
}

+ (id)extrasBackButton:(long long)a0;
+ (id)extrasNavigationButton:(long long)a0;
+ (id)textDodgeColor;
+ (id)textFilter;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
