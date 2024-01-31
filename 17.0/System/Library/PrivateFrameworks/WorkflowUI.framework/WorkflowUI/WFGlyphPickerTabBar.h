@class NSString, UITabBar;
@protocol WFGlyphPickerTabBarDelegate;

@interface WFGlyphPickerTabBar : UIView <UITabBarDelegate>

@property (weak, nonatomic) UITabBar *tabBar;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (weak, nonatomic) id<WFGlyphPickerTabBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tabBar:(id)a0 didSelectItem:(id)a1;
- (id)initWithTabNames:(id)a0 tabCharacters:(id)a1;

@end
