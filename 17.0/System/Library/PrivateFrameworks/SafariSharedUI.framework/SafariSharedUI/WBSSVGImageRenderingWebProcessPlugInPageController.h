@protocol WBSSVGImageRenderingObserver;

@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSSVGImageRenderingObserver> _svgImageRenderingObserver;
}

- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (id)svgImageRenderingObserver;

@end
