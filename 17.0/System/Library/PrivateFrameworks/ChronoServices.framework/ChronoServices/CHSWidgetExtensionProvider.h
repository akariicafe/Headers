@class CHSChronoServicesConnection, NSSet, CHSWidgetExtensionSet, NSString, NSHashTable, NSDictionary;
@protocol CHSIconResolving, BSInvalidatable;

@interface CHSWidgetExtensionProvider : NSObject <BSDescriptionProviding, CHSChronoServiceClient, BSInvalidatable> {
    id<CHSIconResolving> _iconResolver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CHSWidgetExtensionSet *_lock_extensionSet;
    id<BSInvalidatable> _lock_subscription;
    BOOL _lock_invalidated;
    NSHashTable *_lock_observers;
    NSDictionary *_lock_iconVersionByExtensionIdentity;
}

@property (readonly, nonatomic) CHSWidgetExtensionSet *_widgetExtensionSet;
@property (retain, nonatomic) CHSChronoServicesConnection *connection;
@property (copy, nonatomic) id /* block */ eduModeProvider;
@property (readonly, nonatomic) NSSet *containers;
@property (readonly, nonatomic) NSSet *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_computeIconVersionsByForExtensions:(id)a0 withIconResolver:(id)a1;
+ (id)_makeWidgetExtensionSetWithExtensions:(id)a0 iconResolver:(id)a1;

- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)unregisterObserver:(id)a0;
- (void)invalidate;
- (id)initIncludingIntents:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)_isEDUMode;
- (id)initWithIncludeDefaultIntents:(BOOL)a0;
- (void)widgetExtensionsDidChange:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithConnection:(id)a0 eduProvider:(id /* block */)a1;
- (void)_lock_loadContentInitiallySynchronouslyIfNecessary;
- (void)_lock_notifyObserversExtensionsDidChange;
- (void)_lock_widgetExtensionsDidChange:(id)a0 postNotification:(BOOL)a1;
- (id)widgetExtensionContainerForContainerBundleIdentifier:(id)a0;
- (id)widgetExtensionContainerForExtensionBundleIdentifier:(id)a0;

@end
