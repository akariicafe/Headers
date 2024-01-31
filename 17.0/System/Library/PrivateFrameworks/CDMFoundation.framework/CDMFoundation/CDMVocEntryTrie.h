@class CDMMarisaTrie;

@interface CDMVocEntryTrie : NSObject {
    CDMMarisaTrie *_vocTrie;
}

@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (BOOL)hasPrefix:(id)a0;
- (id)entriesForText:(id)a0;
- (id)initWithFilePath:(id)a0 versionNumber:(id)a1;
- (BOOL)hasEntry:(id)a0;

@end
