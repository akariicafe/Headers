@class NSString, NSMutableDictionary;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionMonitor : NSObject <STDynamicActivityAttributionClientHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _lock_handler;
    id<STDynamicActivityAttributionServerHandle> _lock_server;
    NSMutableDictionary *_lock_attributions;
    BOOL _lock_invalidated;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)currentAttributionsDidChange:(id)a0;
- (id)currentAttributions;
- (void)invalidate;
- (void)activate;
- (struct { unsigned int x0[8]; })auditToken;
- (id)initWithServerHandle:(id)a0;
- (void).cxx_destruct;
- (id)attributionForAttribution:(id)a0;
- (id)attributionForClient:(struct { unsigned int x0[8]; })a0;

@end
