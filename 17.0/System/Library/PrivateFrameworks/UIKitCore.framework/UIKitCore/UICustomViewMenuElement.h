@class NSString, UIMenuElement, UIImage, UIView, NSAttributedString;
@protocol UIPopoverPresentationControllerSourceItem;

@interface UICustomViewMenuElement : UIMenuElement <_UIMenuLeaf>

@property (copy, nonatomic) id /* block */ viewProvider;
@property (nonatomic, setter=_setForceCustomViewSupport:) BOOL _forceCustomViewSupport;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIMenuElement *menuElementRepresentation;
@property (copy, nonatomic) id /* block */ primaryActionHandler;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (copy, nonatomic) UIImage *selectedImage;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> presentationSourceItem;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) id sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithViewProvider:(id /* block */)a0;

- (void)performWithSender:(id)a0 target:(id)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_leafKeyInput;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (BOOL)_isDefaultCommand;
- (id)_resolvedTargetFromFirstTarget:(id)a0 sender:(id)a1;
- (id)_leafAlternates;
- (BOOL)_isLeaf;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)initWithMenuElement:(id)a0;

@end
