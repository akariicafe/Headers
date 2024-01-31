@class NSArray, NSMutableIndexSet, NSLock, NSMutableArray;

@interface _EFCombineLatestObservableSubscription : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) NSArray *observables;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) NSMutableIndexSet *activeIndexes;
@property (retain, nonatomic) NSMutableIndexSet *silentIndexes;

- (void)_observableAtIndex:(unsigned long long)a0 didCompleteForObserver:(id)a1;
- (id)initWithObservables:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)_observableAtIndex:(unsigned long long)a0 didFailWithError:(id)a1 observer:(id)a2;
- (void)_observableAtIndex:(unsigned long long)a0 receivedResult:(id)a1 observer:(id)a2;

@end
