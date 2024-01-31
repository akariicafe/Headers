@class NSArray, NSString, UIImage, NSAttributedString;
@protocol UIPopoverPresentationControllerSourceItem, UIDeferredMenuElementDelegate;

@interface UIDeferredMenuElement : UIMenuElement <_UIMenuLeaf> {
    BOOL _isSignalingFulfillment;
}

@property (copy, nonatomic) id /* block */ elementProvider;
@property (retain, nonatomic) id metadata;
@property (weak, nonatomic) id<UIDeferredMenuElementDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *fulfilledElements;
@property (readonly, nonatomic) BOOL fulfilled;
@property (readonly, nonatomic) BOOL cachesItems;
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

+ (BOOL)supportsSecureCoding;
+ (id)elementWithUncachedProvider:(id /* block */)a0;
+ (id)_elementCachingItems:(BOOL)a0 provider:(id /* block */)a1;
+ (id)elementWithProvider:(id /* block */)a0;

- (void)performWithSender:(id)a0 target:(id)a1;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (id)_leafKeyInput;
- (id)_validatedLeafWithAlternate:(id)a0 target:(id)a1 validation:(id)a2;
- (long long)_leafKeyModifierFlags;
- (void)_fulfillIfNecessary;
- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (BOOL)_isDefaultCommand;
- (id)_resolvedTargetFromFirstTarget:(id)a0 sender:(id)a1;
- (id)_leafAlternates;
- (BOOL)_isLoadingPlaceholder;
- (id)initWithCoder:(id)a0;
- (BOOL)_isLeaf;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
