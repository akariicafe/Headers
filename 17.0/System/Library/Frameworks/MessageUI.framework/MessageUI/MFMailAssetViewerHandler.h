@class MFMailQLAttachmentContext, NSURL;
@protocol MFMailAssetViewerHandlerDelegate;

@interface MFMailAssetViewerHandler : NSObject

@property (readonly, nonatomic) MFMailQLAttachmentContext *attachmentContext;
@property (readonly, weak, nonatomic) id<MFMailAssetViewerHandlerDelegate> delegate;
@property (readonly, nonatomic) NSURL *editedURL;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttachmentContext:(id)a0 delegate:(id)a1;
- (void)launchAssetViewerForItem:(id)a0 editContent:(BOOL)a1 completion:(id /* block */)a2;
- (void)launchAssetViewerForURL:(id)a0 editContent:(BOOL)a1 completion:(id /* block */)a2;

@end
