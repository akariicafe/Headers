@class UIWindow, NSString, UITableViewCell, NSUUID, UITableView;

@interface PKFakeCalendarLocationDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate> {
    UITableViewCell *_cell;
    UITableView *_tableView;
    UIWindow *_window;
    NSUUID *_elementID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (id)_searchBarInView:(id)a0;
- (id)initWithCell:(id)a0 window:(id)a1;

@end
