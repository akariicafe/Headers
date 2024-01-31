@class TUDelegateController;
@protocol TUScreenTimeStateDataSource, TUAbstractScreenTimeObserverDelegate, TUNotifyObserver;

@interface TUAbstractScreenTimeObserver : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) id<TUScreenTimeStateDataSource> screenTimeDataSource;
@property (readonly, nonatomic) TUDelegateController<TUAbstractScreenTimeObserverDelegate> *delegateController;
@property (nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled;
@property (readonly, nonatomic) id<TUNotifyObserver> notifyObserver;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 notificationName:(id)a2;
- (void)updateScreenTimeEnabled;

@end
