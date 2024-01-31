@class NSString, NSDictionary, NSMutableArray, KVItemBuilder;

@interface KMMapper_AppIntentVocabulary : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSMutableArray *_items;
    NSDictionary *_intentSlotToFieldTypeMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (long long)targetItemType;
- (BOOL)_addItemWithItemId:(id)a0 fieldType:(long long)a1 values:(id)a2 error:(id *)a3;
- (id)_resolveFieldTypeFromIntentSlotName:(id)a0;

@end
