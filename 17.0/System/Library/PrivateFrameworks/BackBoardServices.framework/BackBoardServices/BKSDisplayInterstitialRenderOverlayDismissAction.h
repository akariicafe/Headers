@class NSString, BKSDisplayRenderOverlayDescriptor;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction> {
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;

- (void)dismiss;
- (id)initWithDescriptor:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dismissWithAnimation:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
