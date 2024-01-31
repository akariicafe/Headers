@class NSSet, NSArray;

@interface MTUuidQueryObserver : MTBaseQueryObserver

@property (retain, nonatomic) NSSet *uuidSet;
@property (retain, nonatomic) NSArray *uuidOrder;

- (void)startObserving;
- (void)controllerDidChangeContent:(id)a0;
- (void)notifyObservers;
- (void).cxx_destruct;
- (id)addResultsChangedHandler:(id /* block */)a0;

@end
