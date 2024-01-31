@class NSSet;

@interface HFItemProvider : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *items;
@property (retain, nonatomic) NSSet *clientInvalidationReasons;

+ (BOOL)prefersNonBlockingReloads;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)asGeneric;
- (id)invalidationReasons;
- (id)reloadItemsWithHomeKitObjects:(id)a0 filter:(id /* block */)a1 itemMap:(id /* block */)a2;
- (id)reloadItemsWithObjects:(id)a0 keyAdaptor:(id /* block */)a1 itemAdaptor:(id /* block */)a2 filter:(id /* block */)a3 itemMap:(id /* block */)a4;

@end
