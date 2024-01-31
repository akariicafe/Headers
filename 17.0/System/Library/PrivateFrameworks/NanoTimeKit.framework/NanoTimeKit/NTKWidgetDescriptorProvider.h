@class NSSet, NSDictionary, NSString, CHSWidgetDescriptorProvider, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface NTKWidgetDescriptorProvider : NSObject <CHSWidgetDescriptorProviderObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    CHSWidgetDescriptorProvider *_widgetDescriptorProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_firstLoadCompleted;
    NSSet *_lock_widgetDescriptors;
    NSDictionary *_lock_descriptorsByExtensionIdentifier;
    NSHashTable *_lock_observers;
}

@property (class, readonly, nonatomic) NTKWidgetDescriptorProvider *sharedInstance;

@property (readonly, nonatomic) BOOL initalLoadCompleted;
@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)reloadDescriptorsForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)unregisterObserver:(id)a0;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void).cxx_destruct;
- (void)_queue_widgetDescriptorsChanged;

@end
