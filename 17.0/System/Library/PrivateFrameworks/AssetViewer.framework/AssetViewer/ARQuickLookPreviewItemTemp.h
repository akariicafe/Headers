@class NSURL, NSString;

@interface ARQuickLookPreviewItemTemp : ARQuickLookPreviewItem <QLPreviewItem> {
    NSURL *_myPreviewURL;
}

@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFileAtURL:(id)a0;

@end
