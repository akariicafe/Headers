@class IRXPCServicesManager;

@interface IRDaemon : NSObject {
    IRXPCServicesManager *_xpcManager;
}

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)_startServices;

@end
