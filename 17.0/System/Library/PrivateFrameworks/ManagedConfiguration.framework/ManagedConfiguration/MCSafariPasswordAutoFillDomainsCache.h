@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MCSafariPasswordAutoFillDomainsCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (id)init;
- (BOOL)isSafariPasswordAutoFillAllowedForURL:(id)a0;
- (void).cxx_destruct;
- (void)memberQueueRereadCache;
- (void)rereadCache;

@end
