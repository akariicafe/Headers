@interface WKShareSheetFileItemProvider : UIActivityItemProvider {
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
    struct RetainPtr<LPLinkMetadata> { void *m_ptr; } _headerMetadata;
}

- (id)initWithURL:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewControllerLinkMetadata:(id)a0;

@end
