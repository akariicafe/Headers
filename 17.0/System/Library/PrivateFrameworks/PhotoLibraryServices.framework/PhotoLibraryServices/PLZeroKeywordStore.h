@class NSString;

@interface PLZeroKeywordStore : NSObject {
    NSString *_storePath;
}

+ (id)expectedClasses;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)deleteStore;
- (id)currentZeroKeywords;
- (id)currentZeroKeywordsForLibraryScope:(long long)a0;
- (void)updateZeroKeywordsTo:(id)a0;

@end
