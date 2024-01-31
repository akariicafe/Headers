@interface SGRe2 : NSObject {
    unsigned char _isTrivial;
}

+ (id)re2WithRegexp:(id)a0;
+ (id)re2WithRegexpData:(id)a0;
+ (id)re2WithRegexpDataLazy:(id)a0;
+ (id)re2WithRegexpLazy:(id)a0;
+ (id)re2WithSubregexps:(id)a0;
+ (id)re2WithSubregexps:(id)a0 prefilter:(id)a1;
+ (void)setCacheLimitForTesting:(unsigned long long)a0;

- (BOOL)isTrivial;
- (id)existsInString:(id)a0;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (void)enumerateMatchesInString:(id)a0 ngroups:(unsigned long long)a1 block:(id /* block */)a2;
- (void)enumerateMatchesInString:(id)a0 ngroups:(unsigned long long)a1 blockWithSubregexp:(id /* block */)a2;
- (void)enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (void)enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 blockWithSubregexp:(id /* block */)a3;
- (id)existsInUtf8:(const char *)a0;
- (id)hashId;
- (id)matchesString:(id)a0;
- (id)matchesUtf8:(const char *)a0;

@end
