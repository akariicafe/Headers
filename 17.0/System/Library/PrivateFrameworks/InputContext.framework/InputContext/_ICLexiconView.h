@class NSString;

@interface _ICLexiconView : NSObject {
    struct _LXLexicon { } *_lexicon;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (struct _LXLexicon { } *)getLexiconImplementation;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;
- (struct _LXEntry { } *)copyEntryForString:(id)a0;
- (id)getSortKeyEquivalents:(id)a0;

@end
