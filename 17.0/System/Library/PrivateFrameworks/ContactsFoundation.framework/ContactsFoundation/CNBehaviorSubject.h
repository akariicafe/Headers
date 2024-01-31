@class CNObservableContractEnforcement, NSString, CNObservableEvent, NSMutableArray;
@protocol CNSchedulerProvider, CNScheduler;

@interface CNBehaviorSubject : CNObservable <CNObserver>

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) CNObservableEvent *mostRecentEvent;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> resourceLock;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidFailWithError:(id)a0;
- (void)_removeObserver:(id)a0;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (id)_addObserver:(id)a0;
- (id)resultWithResourceLock:(id /* block */)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)performWithResourceLock:(id /* block */)a0;
- (id)initWithSeed:(id)a0 schedulerProvider:(id)a1;

@end
