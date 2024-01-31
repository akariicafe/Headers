@class NSString;
@protocol _MSStickerSendManagerDelegate;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate>

@property (weak, nonatomic) id<_MSStickerSendManagerDelegate> delegate;
@property (retain, nonatomic) NSString *hostBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)canShowBrowserForPluginIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)insertSticker:(id)a0 forceStage:(BOOL)a1 frameInScreenCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completionHandler:(id /* block */)a3;
- (void)showBrowserForPluginIdentifier:(id)a0 style:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)startDragSticker:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fence:(id)a2 completionHandler:(id /* block */)a3;
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(id)a0 frameInRemoteView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(double)a2 scale:(double)a3 fence:(id)a4 completionHandler:(id /* block */)a5;
- (void)stickerDruidDragStarted;
- (void)stickerDruidDragEndedWithMSSticker:(id)a0;

@end
