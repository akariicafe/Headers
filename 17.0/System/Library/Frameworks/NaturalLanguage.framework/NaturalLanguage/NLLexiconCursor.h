@class NSString, NLLexicon;

@interface NLLexiconCursor : NSObject {
    NLLexicon *_lexicon;
    struct _LXCursor { } *_cursor;
}

@property (readonly) BOOL hasEntries;
@property (readonly) BOOL hasChildren;
@property (readonly) double prefixProbability;
@property (readonly) double terminationProbability;
@property (readonly, copy) NSString *traversedString;

- (void)dealloc;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateCompletionsUsingBlock:(id /* block */)a0;
- (void)_enumerateEntriesUsingBlock:(id /* block */)a0;
- (id)cursorByAdvancingWithString:(id)a0;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)initWithLexicon:(id)a0 cursor:(struct _LXCursor { } *)a1;
- (id)initWithLexicon:(id)a0 string:(id)a1;

@end
