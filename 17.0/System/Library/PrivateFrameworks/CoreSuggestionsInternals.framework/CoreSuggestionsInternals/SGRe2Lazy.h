@class NSData;

@interface SGRe2Lazy : SGRe2 {
    NSData *_regexp;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithRegexp:(id)a0;
- (int)_enumerateMatchesInUtf8:(const char *)a0 fromString:(id)a1 ngroups:(unsigned long long)a2 block:(id /* block */)a3;
- (id)existsInUtf8:(const char *)a0;
- (id)hashId;
- (id)initWithRegexpData:(id)a0;
- (id)matchesUtf8:(const char *)a0;

@end
