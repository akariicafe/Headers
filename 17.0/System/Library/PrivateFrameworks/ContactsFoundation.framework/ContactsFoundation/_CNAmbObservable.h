@class NSString, NSArray, NSMapTable;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate> {
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    BOOL _winnerDeclared;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithObservables:(id)a0;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)cancelRemainingObservables;
- (void)observerWillRelayEvent:(id)a0;

@end
