@class NSArray, NSString, NSUUID, HKTaskServerProxyProvider, NSMutableSet;
@protocol HKActiveDataCollectionObserverDelegate;

@interface HKActiveDataCollectionObserver : NSObject <_HKXPCExportable> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_subscribedTypes;
    NSArray *_activelyCollectedTypes;
}

@property (weak, nonatomic) id<HKActiveDataCollectionObserverDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *activelyCollectedTypes;
@property (readonly, nonatomic) BOOL allowCollectionPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)client_didChangeAllowCollectionPause:(BOOL)a0;
- (void)client_updatedCollectedTypes:(id)a0;
- (void)subscribeForQuantityTypes:(id)a0;
- (void)unsubscribeForQuantityTypes:(id)a0;

@end
