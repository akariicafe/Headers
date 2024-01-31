@class NSMutableSet, NSMapTable;

@interface _TVRCExpiringStore : NSObject

@property (retain, nonatomic) NSMutableSet *store;
@property (retain, nonatomic) NSMapTable *identifierToBlockMap;

- (id)init;
- (void)dealloc;
- (void)removeIdentifier:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_removeIdentifierAndPerformCompletion:(id)a0;
- (void)addIdentifier:(id)a0 withExpiration:(double)a1 completion:(id /* block */)a2;

@end
