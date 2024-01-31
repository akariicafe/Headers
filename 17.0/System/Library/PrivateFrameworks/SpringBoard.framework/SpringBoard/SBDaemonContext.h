@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SBDaemonContext : NSObject {
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (void)_handleCancelation;
- (void)removeRequestForKey:(id)a0;
- (id)initWithPid:(int)a0 queue:(id)a1;
- (int)pid;
- (id)description;
- (void).cxx_destruct;
- (id)_newDispatchSourceForPid:(int)a0 queue:(id)a1;
- (void)addRequest:(id)a0 forKey:(id)a1;

@end
