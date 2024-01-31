@class CPSearchMatcher;

@interface ML3MatcherAuxData : NSObject {
    CPSearchMatcher *_searchMatcher;
    char *_searchUTF8String;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
