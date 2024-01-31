@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>

@property (readonly, weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate;

- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1 includeAnalytics:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
