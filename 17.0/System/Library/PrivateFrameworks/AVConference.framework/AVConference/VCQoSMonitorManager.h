@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCQoSMonitorManager : VCObject {
    NSMutableArray *_monitors;
    NSMutableDictionary *_sources;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    long long _reportingInterval;
}

@property (readonly, nonatomic) NSMutableArray *moitors;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (BOOL)doesQoSSourceExistForStreamToken:(id)a0;
- (void)registerQoSReportingSourceForToken:(long long)a0;
- (void)unregisterQoSReportingSourceForToken:(long long)a0;
- (void)updateEventDrivenQoSReport:(id)a0 toClientsWithToken:(long long)a1;
- (void)updateQoSReport:(id)a0 toClientsWithToken:(long long)a1;

@end
