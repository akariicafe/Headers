@class NSUUID, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_path, OS_dispatch_source, OS_dispatch_queue;

@interface NRPreferWiFi : NSObject {
    BOOL _needsReassert;
    BOOL _isP2P;
    BOOL _p2pNeededImmediately;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    unsigned long long _assertCount;
    NSUUID *_agentUUID;
    NSObject<OS_dispatch_source> *_timer;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
