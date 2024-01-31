@class NSString, UICellAccessory;

@interface _SFReportTranslationIssueCell : UICollectionViewListCell {
    UICellAccessory *_cellAccessoryCheckmark;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (nonatomic) BOOL checked;

- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)setUpTranslationIssueCellWithString:(id)a0;

@end
