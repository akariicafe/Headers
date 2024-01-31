@class NSObject, NSMutableDictionary, CUIKORStringGenerator, NSCache;
@protocol OS_dispatch_queue;

@interface CUIKORPayloadProvider : NSObject

@property (class, readonly, nonatomic) NSCache *backgroundImageCache;
@property (class, readonly, nonatomic) CUIKORPayloadProvider *sharedProvider;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *drawingQueue;
@property (readonly, nonatomic) NSMutableDictionary *pendingRequests;
@property (readonly, nonatomic) CUIKORStringGenerator *stringGenerator;

- (id)init;
- (void)cancelRequest:(long long)a0;
- (void).cxx_destruct;
- (long long)requestPayloadForState:(id)a0 requestOptions:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)_lookupQueue_activeRequestForId:(long long)a0;
- (void)_lookupQueue_enqueueRequest:(id)a0;
- (void)_lookupQueue_removeRequestId:(long long)a0;
- (id)_renderBackgroundImageForState:(id)a0 barColor:(id)a1 backgroundColor:(id)a2 colorBarStyle:(long long)a3;
- (id)_renderBackgroundImageWithState:(id)a0;
- (id)_renderColorBlockImageWithState:(id)a0 barColor:(id)a1 backgroundColor:(id)a2 stripeColor:(id)a3 stripedImageAlpha:(double)a4 colorBarStyle:(long long)a5;
- (id)_renderColorBlockImageWithState:(id)a0 colorBarStyle:(long long)a1;
- (id)_renderLightColorBlockImageWithState:(id)a0 colorBarStyle:(long long)a1;
- (id)_renderLightSelectedColorBlockImageWithState:(id)a0 colorBarStyle:(long long)a1;
- (id)_renderLightUnselectedColorBlockImageWithState:(id)a0 colorBarStyle:(long long)a1;
- (void)_renderRequestId:(long long)a0;
- (id)_renderTextImageWithState:(id)a0;
- (id)_renderTravelTimeImageWithState:(id)a0;
- (void)_scheduleRequestId:(long long)a0;
- (id)_textDrawInfoWithState:(id)a0;

@end
