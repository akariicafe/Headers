@class NSXPCConnection, PSSSSubscriptionManagerInternal, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibraryCore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;

- (id)_connection;
- (id)init;
- (void)_fetchApplicationsInProcess:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_otherBundlesOfInterest;
- (void)fetchApplications:(id /* block */)a0;
- (id)_nonConformingBundleList;

@end
