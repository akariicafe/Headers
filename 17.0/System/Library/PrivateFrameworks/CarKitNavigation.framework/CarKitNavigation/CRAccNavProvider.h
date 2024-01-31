@class NSMutableDictionary, NSArray, NSString, ACCNavigationProvider, NSObject;
@protocol OS_dispatch_queue, CRAccNavProviderDelegate;

@interface CRAccNavProvider : NSObject <ACCNavigationProviderProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) ACCNavigationProvider *iapNavigation;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessoryLock;
@property (retain, nonatomic) NSMutableDictionary *accessoriesIndexed;
@property (retain, nonatomic) NSMutableDictionary *activeComponentsIndexed;
@property (retain, nonatomic) NSMutableDictionary *activeAccessoryComponentsIndexed;
@property (readonly, nonatomic) id<CRAccNavProviderDelegate> delegate;
@property (readonly, nonatomic) NSArray *activeComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_localizedNameForIdentifier:(id)a0;

- (void)navigation:(id)a0 accessoryAttached:(id)a1;
- (void)navigation:(id)a0 startRouteGuidance:(id)a1 componentList:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)navigation:(id)a0 stopRouteGuidance:(id)a1 componentList:(id)a2;
- (void)navigation:(id)a0 accessoryDetached:(id)a1;
- (void)sendInfo:(id)a0 toComponentUID:(id)a1;
- (void)_addAccessoryIfNeeded:(id)a0;
- (void)_broadcastRouteGuidance:(id)a0;
- (id)_componentKeys;
- (id)_locked_activeComponents;
- (void)_locked_addAccessoryIfNeeded:(id)a0;
- (void)resetActiveComponents;
- (void)sendNoSupportForAppIdentifier:(id)a0;

@end
