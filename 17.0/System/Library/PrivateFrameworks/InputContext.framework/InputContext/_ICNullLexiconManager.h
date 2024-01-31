@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)warmUp;
- (void)hibernate;
- (void)removeContactObserver:(id /* block */)a0;
- (id)loadLexicons:(id /* block */)a0;
- (id)init;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id /* block */)addNamedEntitiesUpdateObserver:(id /* block */)a0;
- (id)loadLexicons;
- (void)unloadLexicons;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (void)removeNamedEntitiesUpdateObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (id)test_loadLexicons;

@end
