@class NSDictionary, NSMutableArray;

@interface TITransientLexiconManagerMock : NSObject {
    NSDictionary *_contactCollection;
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    void *_addressBookLexicons;
    void *_appNameLexicons;
}

@property (readonly, nonatomic) NSMutableArray *observers;
@property (nonatomic) int offeredCount;
@property (nonatomic) int acceptedCount;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)getEntries:(struct _LXLexicon { } *)a0;
+ (id)tokenizeEntity:(id)a0;

- (void)unload;
- (void)removeContactObserver:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)getOnce:(id /* block */)a0;
- (struct _LXLexicon { } *)addressBookLexiconForLocale:(const char *)a0;
- (BOOL)searchForWord:(id)a0;
- (struct _LXLexicon { } *)appNameLexiconForLocale:(const char *)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)supplementalLexicons;
- (id)ensureSupplementalLexicons;
- (void)loadLexicons;
- (struct _LXLexicon { } *)namedEntityLexiconForLocale:(const char *)a0;
- (void)debugLogEntities;
- (void).cxx_destruct;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (struct _LXLexicon { } *)namedEntityLexicon;
- (struct _LXLexicon { } *)namedEntityPhraseLexiconForLocale:(const char *)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (struct _LXLexicon { } *)namedEntityPhraseLexicon;
- (void)addEntry:(id)a0 toLexicon:(struct _LXLexicon { } *)a1;
- (id)initWithTransientData:(id)a0 namedEntities:(id)a1;
- (void)setNewContactCollection:(id)a0;

@end
