@class NSNumber, NSString;

@interface CDMMarisaTrie : NSObject <CDMBaseTrie> {
    NSString *_filePath;
    struct Trie { struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> { struct LoudsTrie *ptr_; } trie_; } _readOnlyTrie;
    NSNumber *_versionNumber;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSNumber *hashValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)hasPrefix:(id)a0;
- (id)traversePrefix:(id)a0;
- (id)initWithFilePath:(id)a0 versionNumber:(id)a1;
- (BOOL)_loadTrie;
- (id)_readCachedNumberValueForKey:(id)a0;
- (BOOL)createFromEntries:(id)a0;
- (BOOL)createFromEntries:(id)a0 withHashValue:(id)a1;
- (BOOL)hasEntry:(id)a0;

@end
