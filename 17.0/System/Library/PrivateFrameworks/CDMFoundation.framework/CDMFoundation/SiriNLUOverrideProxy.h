@interface SiriNLUOverrideProxy : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ componentOverrideStore;
    void /* unknown type, empty encoding */ overrideResults;
    void /* unknown type, empty encoding */ swiftifiedInputs;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)setupWithLanguageCode:(id)a0 filePath:(id)a1;
- (BOOL)deleteWithOverrideNamespace:(int)a0 source:(int)a1;
- (id)initWithUseTrie:(BOOL)a0 useMemory:(BOOL)a1;
- (BOOL)insertWithCollection:(id)a0;
- (BOOL)isOverrideStoreValid;
- (BOOL)loadComponentOverrideTrieStoreWithTrieFilePath:(id)a0;
- (BOOL)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)a0;
- (id)matchWithInputs:(id)a0 overrideNamespace:(int)a1;
- (id)matchWithInputs:(id)a0 shouldAppend:(BOOL *)a1;
- (void)preheatWithLanguageCode:(id)a0;

@end
