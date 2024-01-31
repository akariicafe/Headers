@protocol QuickWebsiteSearchEventListener;

@interface SafariFormMetadataController : _SFFormMetadataController {
    id<QuickWebsiteSearchEventListener> _quickWebsiteSearchEventListener;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)didFindSearchURLTemplateString:(id)a0 inFrame:(id)a1 pageController:(id)a2;

@end
