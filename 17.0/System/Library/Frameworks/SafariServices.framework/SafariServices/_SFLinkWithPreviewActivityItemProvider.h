@class LPLinkMetadata;

@interface _SFLinkWithPreviewActivityItemProvider : _SFActivityItemProvider {
    LPLinkMetadata *_cachedLinkMetadata;
}

- (void).cxx_destruct;
- (id)activityViewControllerLinkMetadata:(id)a0;
- (id)initWithPlaceholderItem:(id)a0 URL:(id)a1 pageTitle:(id)a2 webView:(id)a3;

@end
