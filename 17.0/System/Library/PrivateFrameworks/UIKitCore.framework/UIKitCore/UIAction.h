@class NSString, UIImage, NSPointerArray, NSAttributedString;
@protocol UIPopoverPresentationControllerSourceItem;

@interface UIAction : UIMenuElement <_UIMenuLeaf, _UIMenuStateObserverableLeaf, UIMenuLeaf>

@property (class, readonly, nonatomic) UIAction *textInteractableItemDefaultAction;
@property (class, readonly, nonatomic) NSString *_textFromCameraTitle;
@property (class, readonly, nonatomic) NSString *_textFromCameraImageName;
@property (class, readonly, nonatomic) UIImage *_textFromCameraImage;

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) id sender;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (copy, nonatomic) UIImage *selectedImage;
@property (readonly, nonatomic) id<UIPopoverPresentationControllerSourceItem> presentationSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_getStateObservers, setter=_setStateObservers:) NSPointerArray *stateObservers;

+ (BOOL)supportsSecureCoding;
+ (id)_textFromCameraTitleForResponder:(id)a0;
+ (id)actionWithHandler:(id /* block */)a0;
+ (id)actionWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 handler:(id /* block */)a3;
+ (id)captureTextFromCameraActionForResponder:(id)a0 identifier:(id)a1;

- (id)initWithAction:(id)a0;
- (void)performWithSender:(id)a0 target:(id)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_leafKeyInput;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (void)setImage:(id)a0;
- (BOOL)_isDefaultCommand;
- (id)_resolvedTargetFromFirstTarget:(id)a0 sender:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_leafAlternates;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isLeaf;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (void)_addStateObserver:(id)a0;
- (void)_performWithTarget:(id)a0;
- (void)_removeStateObserver:(id)a0;
- (void)_setState:(long long)a0 notifyingObservers:(BOOL)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 discoverabilityTitle:(id)a3 attributes:(unsigned long long)a4 state:(long long)a5 handler:(id /* block */)a6;

@end
