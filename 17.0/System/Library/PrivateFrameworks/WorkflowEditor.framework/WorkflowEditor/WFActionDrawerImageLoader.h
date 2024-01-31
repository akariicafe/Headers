@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface WFActionDrawerImageLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue;
@property (readonly, nonatomic) NSCache *imageCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)loadImagesForInteractionDonation:(id)a0 completionHandler:(id /* block */)a1;

@end
