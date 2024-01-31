@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject

@property (readonly, weak, nonatomic) id observedObject;
@property (readonly, nonatomic) NSMutableDictionary *tokensByContext;
@property (nonatomic) long long nextIdentifier;

- (id)initWithObject:(id)a0;
- (id)allKVOObservers;
- (void)removeHandlerForKey:(id)a0;
- (void)dump;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)insertNewTokenForKeyPath:(id)a0 block:(id /* block */)a1;

@end
