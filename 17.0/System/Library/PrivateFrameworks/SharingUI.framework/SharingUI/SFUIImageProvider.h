@class NSCache, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SFUIImageProvider : NSObject {
    int _nextRequestID;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly, nonatomic) NSMutableDictionary *requestsForIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *requestsForRequestID;
@property (readonly, nonatomic) NSCache *imageCache;

- (id)init;
- (void)cancelImageRequest:(int)a0;
- (void).cxx_destruct;
- (int)nextRequestID;
- (void)deliverImage:(id)a0 identifier:(id)a1 placeholder:(BOOL)a2 error:(id)a3;
- (void)scheduleImageRequest:(id)a0;

@end
