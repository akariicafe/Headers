@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue, AVAssetWriterInputMediaDataRequesterDelegate;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
    id /* block */ _requestBlock;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVWeakReference *_weakReferenceToDelegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (weak) id<AVAssetWriterInputMediaDataRequesterDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (id)initWithRequestQueue:(id)a0 requestBlock:(id /* block */)a1;
- (void)requestMediaDataIfNecessary;

@end
