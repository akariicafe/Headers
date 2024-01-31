@class NSSet, NSMutableDictionary;

@interface PXDiagnosticsItemProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_loadHandlers;
@property (readonly, nonatomic) NSSet *registeredIdentifiers;

+ (id)providerWithItem:(id)a0 identifier:(id)a1;

- (id)init;
- (id)itemForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasItemForIdentifier:(id)a0;
- (void)registerItem:(id)a0 forIdentifier:(id)a1;
- (void)registerItemForIdentifier:(id)a0 loadHandler:(id /* block */)a1;

@end
