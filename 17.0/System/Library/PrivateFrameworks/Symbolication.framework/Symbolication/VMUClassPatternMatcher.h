@interface VMUClassPatternMatcher : NSObject {
    struct { int x0; unsigned long long x1; char *x2; struct re_guts *x3; } *_classesRegex;
    struct { int x0; unsigned long long x1; char *x2; struct re_guts *x3; } *_vmRegionsRegex;
    struct __CFDictionary { } *_memoizedRegexResult;
    BOOL _matchingKindOfClass;
    BOOL _patternMatchesNonObjects;
    unsigned long long _allocationSizeLowerBound;
    unsigned long long _allocationSizeUpperBound;
}

@property (nonatomic, getter=isMatchingKindOfClass) BOOL matchingKindOfClass;

- (void)dealloc;
- (BOOL)_matchesClassInfo:(id)a0;
- (BOOL)_parseMallocSizePattern:(id)a0 error:(id *)a1;
- (BOOL)_regex:(struct { int x0; unsigned long long x1; char *x2; struct re_guts *x3; } *)a0 matchesName:(id)a1;
- (id)initWithPattern:(id)a0 forArgument:(id)a1 error:(id *)a2;
- (BOOL)matchesNodeDetails:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a0 orNodeDescription:(id)a1;
- (void)resetCachedMatches;

@end
