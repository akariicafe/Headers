@class NSArray, PXLabeledValue;

@interface PXSmartAlbumKeywordCondition : PXSmartAlbumCondition {
    NSArray *_keywordValues;
}

@property (class, readonly) PXLabeledValue *anyKeywordValue;

@property (readonly, nonatomic) NSArray *keywordValues;
@property (retain, nonatomic) PXLabeledValue *keywordValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
