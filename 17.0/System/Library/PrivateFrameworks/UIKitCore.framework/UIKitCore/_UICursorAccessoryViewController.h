@class _UICursorAccessoryHostView, NSArray, NSDictionary, UIColor, NSString, UITextRange;
@protocol _UICursorAccessoryViewControllerDelegate;

@interface _UICursorAccessoryViewController : UIViewController <_UICursorAccessoryItemDataSource>

@property (retain, nonatomic) _UICursorAccessoryHostView *hostView;
@property (retain, nonatomic) NSDictionary *accessoriesByIdentifier;
@property (weak, nonatomic) id<_UICursorAccessoryViewControllerDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cursorRect;
@property (retain, nonatomic) NSArray *selectionRects;
@property (retain, nonatomic) UITextRange *selectedRange;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) NSArray *accessories;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct { id x0; id x1; unsigned long long x2; })_contentForAccessory:(id)a0;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredPlacement:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_updateSelectionRectAnimated:(BOOL)a0;
- (void)configureItemView:(id)a0 forAccessoryIdentifier:(id)a1;
- (void)didTapToActivateAccessoryWithIdentifier:(id)a0;
- (void)setAccessories:(id)a0 animated:(BOOL)a1;
- (void)setVisible:(BOOL)a0 animationStyle:(long long)a1;
- (void)setVisible:(BOOL)a0 animationStyle:(long long)a1 completion:(id /* block */)a2;

@end
