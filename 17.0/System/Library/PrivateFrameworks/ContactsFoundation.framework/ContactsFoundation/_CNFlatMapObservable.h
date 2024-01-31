@class CNObservable;
@protocol CNSchedulerProvider;

@interface _CNFlatMapObservable : CNObservable

@property (readonly, nonatomic) CNObservable *observable;
@property (readonly, copy, nonatomic) id /* block */ decoratorGenerator;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

+ (id)flatMapWithObservable:(id)a0 transform:(id /* block */)a1 schedulerProvider:(id)a2;
+ (id)observableWithObservable:(id)a0 transform:(id /* block */)a1 decoratorGenerator:(id /* block */)a2 schedulerProvider:(id)a3;
+ (id)concatMapWithObservable:(id)a0 transform:(id /* block */)a1 schedulerProvider:(id)a2;

- (id)subscribe:(id)a0;
- (id)subscribeInnerObservable:(id)a0 observer:(id)a1 context:(id)a2;
- (id)initWithObservable:(id)a0 transform:(id /* block */)a1 decoratorGenerator:(id /* block */)a2 schedulerProvider:(id)a3;
- (void).cxx_destruct;

@end
