@class NSString, OBPrivacyLinkController, NSDictionary;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {
    NSDictionary *_attributes;
}

@property (readonly) OBPrivacyLinkController *linkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (id)_viewController;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)configureInPage:(id)a0;
- (double)footerHeightForWidth:(double)a0 inView:(id)a1;

@end
