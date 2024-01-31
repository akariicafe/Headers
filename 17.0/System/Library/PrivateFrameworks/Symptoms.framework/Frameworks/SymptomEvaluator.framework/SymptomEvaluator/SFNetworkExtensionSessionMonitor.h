@class NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface SFNetworkExtensionSessionMonitor : NSObject {
    id /* block */ _defaultNEStatusChangedCallback;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) void *session;
@property (retain, nonatomic) NSUUID *configurationID;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (readonly, nonatomic) int status;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_setUpNESessionForConfigurationID:(id)a0 neSessionType:(int)a1 statusChangedCallback:(id /* block */)a2;
- (id)initWithQueue:(id)a0 configID:(id)a1 neSessionType:(int)a2 statusChangedCallback:(id /* block */)a3;

@end
