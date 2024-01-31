@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_LSApplicationRecord : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_languageCodeKey;
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
- (BOOL)addAlternativeNamesFor:(id)a0 forLanguage:(id)a1 error:(id *)a2;

@end
