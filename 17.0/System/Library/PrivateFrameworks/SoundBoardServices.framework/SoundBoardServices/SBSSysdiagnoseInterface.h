@class NSXPCConnection;
@protocol SBSSysdiagnoseImplementer;

@interface SBSSysdiagnoseInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSysdiagnoseImplementer> _sbProxy;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)sysdiagnoseHasStarted:(BOOL)a0;

@end
