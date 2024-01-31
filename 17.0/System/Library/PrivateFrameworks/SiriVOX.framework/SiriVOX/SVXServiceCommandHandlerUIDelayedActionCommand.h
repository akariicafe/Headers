@class NSString, SVXServiceCommandDelayedActionStore, SVXSessionManager;
@protocol SVXPerforming;

@interface SVXServiceCommandHandlerUIDelayedActionCommand : NSObject <SVXServiceCommandHandling> {
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    SVXSessionManager *_sessionManager;
    id<SVXPerforming> _performer;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_performDelayedAction:(id)a0;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithDelayedActionStore:(id)a0 sessionManager:(id)a1 performer:(id)a2;
- (BOOL)isCommandUUFR:(id)a0;

@end
