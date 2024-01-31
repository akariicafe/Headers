@class NSObject, SCMLHandler;
@protocol OS_dispatch_queue;

@interface MADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    SCMLHandler *_handler;
}

@property (readonly, nonatomic) SCMLHandler *handler;

+ (id)sharedResource;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;

@end
