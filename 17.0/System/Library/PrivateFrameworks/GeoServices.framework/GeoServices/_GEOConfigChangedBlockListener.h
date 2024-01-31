@class NSString, _GEOConfigKeyHelper, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOConfigChangedBlockListener : NSObject <_GEOConfigChangedListener> {
    _GEOConfigKeyHelper *keyHelper;
    NSObject<OS_dispatch_queue> *queue;
    id /* block */ block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)callListener;

@end
