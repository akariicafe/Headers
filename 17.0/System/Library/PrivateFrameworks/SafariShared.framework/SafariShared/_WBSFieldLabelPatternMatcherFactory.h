@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {
    NSMutableDictionary *_trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray { } *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)a0 allowingEndOfWordMatches:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_addWord:(id)a0 allowingEndOfWordMatch:(BOOL)a1;

@end
