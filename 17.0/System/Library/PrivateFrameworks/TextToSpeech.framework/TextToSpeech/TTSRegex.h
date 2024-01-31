@interface TTSRegex : NSObject

@property (nonatomic) struct pcre2_real_code_8 { } *compiledPCRERegex;

- (void)dealloc;
- (id)initWithPattern:(id)a0;
- (id)initWithCStringPattern:(const char *)a0 options:(unsigned long long)a1;
- (id)_matchFromOvector:(unsigned long long *)a0 matches:(int)a1 string:(const char *)a2 length:(unsigned long long)a3;
- (void)enumerateMatchesInCString:(const char *)a0 length:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateMatchesInCString:(const char *)a0 ranges:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateMatchesInCString:(const char *)a0 startOffset:(unsigned long long)a1 length:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)initWithCStringPattern:(const char *)a0;
- (id)initWithPattern:(id)a0 options:(unsigned long long)a1;
- (id)initWithPerlPattern:(id)a0;
- (id)matchesInCString:(const char *)a0 length:(unsigned long long)a1;

@end
