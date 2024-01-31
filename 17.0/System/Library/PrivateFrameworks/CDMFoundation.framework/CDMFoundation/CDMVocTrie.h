@class OVMarisaTrie;

@interface CDMVocTrie : NSObject {
    OVMarisaTrie *vocTextTrieReadOnly;
    OVMarisaTrie *vocLabelTrieReadOnly;
    OVMarisaTrie *vocSemanticTrieReadOnly;
    OVMarisaTrie *vocUsoTrieReadOnly;
    OVMarisaTrie *vocUsoNodeIndexTrieReadOnly;
}

+ (id)getTrieURLs:(id)a0;

- (void).cxx_destruct;
- (id)entriesForText:(id)a0;
- (long long *)getLabelTrieCount;
- (long long *)getTextTrieCount;
- (int)getUsoNodeIndex:(id)a0 semantic:(id)a1;
- (id)initWithTriePath:(id)a0;
- (id)usoGraphForLabel:(id)a0 semantic:(id)a1;

@end
