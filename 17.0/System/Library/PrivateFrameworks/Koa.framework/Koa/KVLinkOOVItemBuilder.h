@class KVItemBuilder;

@interface KVLinkOOVItemBuilder : NSObject {
    KVItemBuilder *_builder;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_buildItemWithError:(id *)a0;
- (id)linkOOVItemWithPhrase:(id)a0 itemId:(id)a1 customPronunciations:(id)a2 error:(id *)a3;

@end
