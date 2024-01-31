@class SKUIViewElement, SKUINavigationBarViewElement;
@protocol SKUIMenuBarViewElement;

@interface SKUIMenuBarTemplateElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElement<SKUIMenuBarViewElement> *menuBar;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;

- (id)_menuBarChildOfElement:(id)a0;

@end
