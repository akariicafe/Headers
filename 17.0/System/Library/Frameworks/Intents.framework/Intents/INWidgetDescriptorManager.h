@class NSObject, NSSet, NSString, CHSWidgetDescriptorProvider, NSMutableArray, INWatchdogTimer;
@protocol OS_dispatch_queue;

@interface INWidgetDescriptorManager : NSObject <CHSWidgetDescriptorProviderObserver> {
    CHSWidgetDescriptorProvider *_provider;
    BOOL _observing;
    NSMutableArray *_completionHandlers;
    INWatchdogTimer *_watchdogTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSSet *widgetDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void).cxx_destruct;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:(id)a0;
- (void)_startObservingDescriptors;
- (void)getDescriptorForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDescriptorsWithCompletionHandler:(id /* block */)a0;

@end
