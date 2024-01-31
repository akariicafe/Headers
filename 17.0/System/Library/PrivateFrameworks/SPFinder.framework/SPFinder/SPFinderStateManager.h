@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol SPFinderStateXPCProtocol, OS_dispatch_queue;

@interface SPFinderStateManager : NSObject <SPFinderStateManagement>

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPFinderStateXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ stateChangedBlock;
@property (copy, nonatomic) id /* block */ stateInfoChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableFinderModeWithCompletion:(id /* block */)a0;
- (void)updateStateBlock;
- (id)init;
- (void)setActiveCache:(long long)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)dealloc;
- (void)start;
- (void)fetchFinderState:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stateInfoWithCompletion:(id /* block */)a0;
- (void)enableFinderModeWithCompletion:(id /* block */)a0;

@end
