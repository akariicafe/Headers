@interface SPMatcher : NSObject {
    void *_matcher;
}

+ (id)transcriptionForString:(id)a0 withLanguage:(id)a1;

- (void)dealloc;
- (BOOL)matches:(id)a0;
- (unsigned long long)wordCount;
- (id)initWithSearchString:(id)a0 andLocale:(id)a1 andOptions:(unsigned long long)a2;
- (BOOL)matchesUTF8String:(const char *)a0;
- (BOOL)matchesUTF8String:(const char *)a0 outMatchBits:(unsigned long long *)a1;
- (BOOL)matches:(id)a0 outMatchBits:(unsigned long long *)a1;

@end
