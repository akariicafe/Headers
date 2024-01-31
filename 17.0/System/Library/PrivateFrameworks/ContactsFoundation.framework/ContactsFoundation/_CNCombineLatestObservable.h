@class NSArray, NSMutableArray, NSMutableIndexSet;
@protocol CNScheduler;

@interface _CNCombineLatestObservable : CNObservable

@property (readonly, nonatomic) NSArray *observables;
@property (readonly, nonatomic) NSMutableArray *results;
@property (readonly, nonatomic) NSMutableArray *tokens;
@property (readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes;
@property (readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes;
@property (readonly, nonatomic) id<CNScheduler> resultScheduler;

- (id)initWithObservables:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)performWithResourceLock:(id /* block */)a0;
- (id)initWithObservables:(id)a0 resultScheduler:(id)a1 schedulerProvider:(id)a2;
- (void)observableAtIndex:(unsigned long long)a0 didFailWithError:(id)a1 forObserver:(id)a2;
- (void)observableAtIndex:(unsigned long long)a0 didReceiveResult:(id)a1 forObserver:(id)a2;
- (void)observableAtIndexDidComplete:(unsigned long long)a0 forObserver:(id)a1;

@end
