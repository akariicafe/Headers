@class UIViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue, ARQLInlineService3;

@interface ASVInlinePreviewFactory : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    UIViewController *_sharedRemoteViewController;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) id<ARQLInlineService3> sharedInlineService;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)_getSharedInlineServiceWithCompletionHandler:(id /* block */)a0;
- (void)createFullscreenInstanceWithUUID:(id)a0 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 previewOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)getSharedInlineServiceWithCompletionHandler:(id /* block */)a0;
- (void)handleInterruptionOrInvalidation;

@end
