@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (id)_extractCanonicalLinkWithInjectedObject:(id)a0;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_extractSharingLink;
- (id)_extractDominantIFrameWithInjectedObject:(id)a0;
- (id)initWithPageController:(id)a0;
- (void)_setUpRemoteInterface;
- (id)_injectedLinkExtractorSourceString;

@end
