@class SUUIPreviewContainerViewController, SUUIClientContext;

@interface SUUIClientContextPreviewContainer : IKJSObject <SUUIClientContextPreviewContainer> {
    SUUIClientContext *_clientContext;
    SUUIPreviewContainerViewController *_previewContainerViewController;
}

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1 previewContainerViewController:(id)a2;
- (void)previewDocument:(id)a0 :(id)a1;

@end
