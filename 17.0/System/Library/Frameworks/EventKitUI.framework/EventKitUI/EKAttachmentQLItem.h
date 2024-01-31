@class NSURL, NSString;

@interface EKAttachmentQLItem : NSObject <QLPreviewItem> {
    NSURL *_url;
    NSString *_filename;
}

@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 filename:(id)a1;

@end
