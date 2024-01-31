@class NSString, KVItemBuilder, NSMutableArray;

@interface KMMapper_HMHome : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (id)init;
- (BOOL)_addItemWithItemId:(id)a0 assistantHomeKitId:(id)a1 fieldType:(long long)a2 name:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (long long)targetItemType;

@end
