@class BMAccessServiceListener, NSObject;
@protocol OS_dispatch_queue;

@interface BMAccessDaemon : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMAccessServiceListener *legacyAccessService;
@property (readonly, nonatomic) BMAccessServiceListener *userAccessService;
@property (readonly, nonatomic) BMAccessServiceListener *systemAccessService;

+ (id)new;
+ (BOOL)isAgent;

- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
