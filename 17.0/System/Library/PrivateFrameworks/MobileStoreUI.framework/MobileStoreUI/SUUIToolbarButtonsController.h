@class NSMapTable, SUUIToolbarViewElement;

@interface SUUIToolbarButtonsController : NSObject {
    NSMapTable *_buttonItemElements;
    SUUIToolbarViewElement *_toolbarElement;
}

- (void).cxx_destruct;
- (void)_buttonAction:(id)a0;
- (void)_updateButtonItem:(id)a0 withButtonViewElement:(id)a1;
- (id)addButtonItemWithButtonViewElement:(id)a0;
- (void)disconnectAllButtons;
- (id)initWithToolbarViewElement:(id)a0;

@end
