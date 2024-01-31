@interface DocumentManagerExecutables.DOCTagsCollectionViewData : NSObject {
    void /* unknown type, empty encoding */ tagsUnionCollection;
    void /* unknown type, empty encoding */ pendingExternalChange;
}

@property (nonatomic, readonly) BOOL _hasPendingExternalChange;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) long long countOfTags;

- (id)init;
- (void).cxx_destruct;
- (id)tagAtIndex:(long long)a0;
- (void)applyPendingExternalChange:(id)a0 timeout:(double)a1;
- (void)applyTagsFromNodes:(id)a0;
- (long long)indexOfTag:(id)a0;
- (long long)presenceOf:(id)a0;

@end
