@class SKUIToolbarViewElement, NSArray, SKUIToolbarButtonsController;
@protocol SKUIToolbarControllerDelegate;

@interface SKUIToolbarController : NSObject {
    SKUIToolbarButtonsController *_buttonsController;
}

@property (readonly, nonatomic) SKUIToolbarViewElement *toolbarViewElement;
@property (weak, nonatomic) id<SKUIToolbarControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *toolbarItems;

- (void)dealloc;
- (void).cxx_destruct;
- (void)detachFromNavigationController:(id)a0;
- (id)_barButtonItemWithButtonElement:(id)a0;
- (id)_barButtonItemWithElement:(id)a0;
- (id)initWithToolbarViewElement:(id)a0;
- (BOOL)toolbarButtonsController:(id)a0 shouldDispatchEventForButton:(id)a1;
- (void)updateToolbarForNavigationController:(id)a0;

@end
