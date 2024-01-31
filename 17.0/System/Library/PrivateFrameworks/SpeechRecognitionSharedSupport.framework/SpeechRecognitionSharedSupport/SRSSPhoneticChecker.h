@class NSString, NSDictionary, NSMutableArray, _EARUserProfileBuilder;

@interface SRSSPhoneticChecker : NSObject {
    NSString *_localeIdentifier;
    NSMutableArray *_lexiconWords;
    NSMutableArray *_lexiconEntries;
    NSDictionary *_phoneIds;
    unsigned long long _phoneCount;
    double *_confusionMatrix;
    NSMutableArray *_regionsToFree;
    _EARUserProfileBuilder *_builder;
    BOOL _lexiconLoaded;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_freeLexicon;
- (void)_freeLexiconEntry:(struct PhoneticLexiconEntry { struct PhoneSequence **x0; unsigned char x1; double x2; } *)a0;
- (BOOL)_loadConfusionMatrixFromJsonFile:(id)a0;
- (BOOL)_loadConfusionMatrixWithModelPath:(id)a0 localization:(id)a1;
- (void)_loadLexiconWithModelPath:(id)a0 localization:(id)a1;
- (id)_partitionEntriesWithCount:(unsigned long long)a0 partitionCount:(unsigned long long)a1;
- (unsigned char)_phoneForString:(id)a0;
- (void)_waitOnLexiconLoad;
- (struct PhoneticLexiconEntry { struct PhoneSequence **x0; unsigned char x1; double x2; } *)copyLexiconEntriesForString:(id)a0;
- (id)guessesForString:(id)a0 maxResults:(unsigned long long)a1;
- (id)guessesForString:(id)a0 maxResults:(unsigned long long)a1 phoneticWeight:(double)a2 priorWeight:(double)a3;
- (id)guessesForString:(id)a0 maxResults:(unsigned long long)a1 phoneticWeight:(double)a2 priorWeight:(double)a3 maxThreads:(unsigned long long)a4;
- (id)initWithLocaleIdentifier:(id)a0 modelPath:(id)a1;
- (id)initWithLocaleIdentifier:(id)a0 modelPath:(id)a1 syncronously:(BOOL)a2;
- (id)phoneDescription:(struct PhoneSequence { unsigned char x0; char *x1; } *)a0;

@end
