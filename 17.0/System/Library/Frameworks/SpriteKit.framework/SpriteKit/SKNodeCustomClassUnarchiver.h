@class NSString, NSMutableDictionary;

@interface SKNodeCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void).cxx_destruct;
- (id)_currentAppModuleName;
- (id)_findValidClassName:(id)a0;
- (id)_mangledSwiftClassName:(id)a0 moduleName:(id)a1;

@end
