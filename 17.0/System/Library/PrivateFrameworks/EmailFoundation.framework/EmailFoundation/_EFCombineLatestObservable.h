@class NSArray;

@interface _EFCombineLatestObservable : EFObservable

@property (copy, nonatomic) NSArray *observables;

- (id)initWithObservables:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
