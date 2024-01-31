@class NSArray, AVWeakReference;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject {
    AVWeakReference *weakReference;
    AVWeakReference *delegateWeakReference;
    BOOL didPropagateContents;
    NSArray *filters;
    struct CGSize { double width; double height; } thumbnailSize;
}

- (id)init;
- (void)dealloc;

@end
