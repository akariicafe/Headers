@class NSString, CLLocationManager, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ATXWidgetLocationAuthorizationTracker : NSObject <CLLocationManagerDelegate> {
    NSString *_extensionBundleIdentifier;
    NSString *_containerBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_queue_authorizedForWidgetUpdates;
    NSObject<OS_dispatch_semaphore> *_sem;
    CLLocationManager *_manager;
}

@property (readonly, nonatomic, getter=isContainerAuthorizedForWidgetUpdates) BOOL containerAuthorizedForWidgetUpdates;
@property (readonly, nonatomic) BOOL widgetWantsLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionBundleIdentifier:(id)a0 containerBundleIdentifier:(id)a1;

@end
