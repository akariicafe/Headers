@class NSURL, NSString;

@interface SXQuickLookFile : NSObject <QLPreviewItem>

@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *shareURL;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 title:(id)a1 shareURL:(id)a2;
- (id)initWithFileURL:(id)a0 shareURL:(id)a1;

@end
