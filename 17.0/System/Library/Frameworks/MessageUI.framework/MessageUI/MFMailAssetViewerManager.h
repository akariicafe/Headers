@class NSString, EFLocked;
@protocol MFMailAssetViewerManagerDelegate;

@interface MFMailAssetViewerManager : NSObject <MFMailAssetViewerHandlerDelegate>

@property (retain, nonatomic) EFLocked *handlers;
@property (weak, nonatomic) id<MFMailAssetViewerManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)assetViewer:(id)a0 editCompletedWithURL:(id)a1;
- (void)assetViewerEditCanceled:(id)a0;
- (void)assetViewerSceneClosed:(id)a0;
- (void)assetViewerSceneLaunched:(id)a0;
- (id)handlerForAttachmentContext:(id)a0;

@end
