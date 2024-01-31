@class _FBSSnapshotContext, IOSurface, NSString;

@interface _FBSSnapshot : NSObject <BSInvalidatable> {
    struct CGImage { } *_imageRef;
    IOSurface *_nonProtectedSurfaceRef;
    IOSurface *_protectedSurfaceRef;
}

@property (readonly, copy, nonatomic) _FBSSnapshotContext *context;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) IOSurface *fallbackIOSurface;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)capture;
- (void)dealloc;
- (double)_scale;
- (void)invalidate;
- (void)_doInvalidate;
- (void).cxx_destruct;
- (id)initWithSnapshotContext:(id)a0;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_scaledSnapshotSize;

@end
