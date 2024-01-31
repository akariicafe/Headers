@class NSString, NSMutableDictionary;

@interface AFUIAutoCompleteMappingController : NSObject {
    NSMutableDictionary *_cache;
    NSString *_plistPath;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cachePlistMappings;
- (id)heuristicStringsForTextContentTypes:(id)a0;
- (id)heuristicTextContentTypeForHints:(id)a0 textContentTypesToSkip:(id)a1;

@end
