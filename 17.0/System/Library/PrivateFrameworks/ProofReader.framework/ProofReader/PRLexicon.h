@class NSString;

@interface PRLexicon : NSObject {
    NSString *_localization;
    NSString *_unigramsPath;
    NSString *_name;
    const void *_lexicon;
}

@property (readonly) NSString *name;

+ (id)lexiconWithLexicon:(const void *)a0;
+ (id)lexiconWithLocalization:(id)a0 unigramsPath:(id)a1;
+ (id)lexiconWithName:(id)a0 words:(id)a1;

- (void)dealloc;
- (struct _LXLexicon { } *)lexicon;
- (id)description;
- (BOOL)getProbabilityForString:(id)a0 probability:(double *)a1;
- (BOOL)getProbabilityForTokenID:(unsigned int)a0 probability:(double *)a1;
- (id)stringForTokenID:(unsigned int)a0;
- (unsigned int)tokenIDForString:(id)a0;
- (id)initWithLexicon:(const void *)a0;
- (id)createCursor;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateCorrectionEntriesForWord:(id)a0 maxCorrections:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateEntriesForString:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithLocalization:(id)a0 unigramsPath:(id)a1;
- (id)initWithName:(id)a0 words:(id)a1;

@end
