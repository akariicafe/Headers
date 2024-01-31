@class NSURL, NSString, NSDate;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {
    struct CGSize { double width; double height; } _size;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *transferGUID;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSString *irisVideoPath;
@property (nonatomic) BOOL isIrisAsset;
@property (copy, nonatomic) NSURL *alternateShareURL;
@property (retain, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) NSURL *appendedBundleURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) BOOL showDocumentIcon;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (unsigned long long)pxWidth;
+ (id)UTITypes;
+ (id)previewCache;
+ (id)previewSizingQueue;

- (id)imageData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)dragItem;
- (id)UTIType;
- (id)_getIrisBundleLocation;
- (id)_getIrisBundleURL;
- (void)_savePreview:(id)a0;
- (id)_savedPreviewFromURL:(id)a0;
- (id)cachedPreview;
- (id)calculateIrisVideoPath;
- (BOOL)canShareItem;
- (id)fileIcon;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (id)getIrisVideoPath;
- (id)initWithFileURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 transferGUID:(id)a2 guid:(id)a3 createdDate:(id)a4 shareURL:(id)a5;
- (id)pasteboardItem;
- (id)previewURL:(BOOL)a0;
- (void)startDeferredSetup;
- (id)uncachedPreviewURL;

@end
