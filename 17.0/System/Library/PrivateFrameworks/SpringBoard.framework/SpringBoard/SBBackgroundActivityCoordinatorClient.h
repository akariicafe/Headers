@class NSXPCConnection, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface SBBackgroundActivityCoordinatorClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSSet *registeredBackgroundActivityIdentifiers;

- (void).cxx_destruct;
- (void)acquireAssertionAndDeliverTapContextToClient:(id)a0;
- (id)initWithConnection:(id)a0 andBackgroundActivityIdentifiers:(id)a1;

@end
