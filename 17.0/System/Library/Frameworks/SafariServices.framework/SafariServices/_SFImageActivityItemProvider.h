@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider {
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)_imageData;
- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
