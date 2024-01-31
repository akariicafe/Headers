@class SUUINavigationBarViewElement, SUUIViewElement;
@protocol SUUIMenuBarViewElement;

@interface SUUIMenuBarTemplateElement : SUUIViewElement

@property (readonly, nonatomic) SUUIViewElement<SUUIMenuBarViewElement> *menuBar;
@property (readonly, nonatomic) SUUINavigationBarViewElement *navigationBarElement;

- (id)_menuBarChildOfElement:(id)a0;

@end
