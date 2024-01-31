@class NSNumber, NSString, PXSurveyQuestionAssetGroupView;

@interface PXSurveyQuestionCustomizableAssetGroupConfiguration : PXSurveyQuestionAssetGroupConfiguration {
    PXSurveyQuestionAssetGroupView *_contentView;
}

@property (retain, nonatomic) NSNumber *customMaximumPreviewAssetCount;
@property (retain, nonatomic) NSString *keyAssetLocalIdentifier;

- (id)contentView;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 assetCollection:(id)a1;
- (id)initWithTitle:(id)a0 assetCollection:(id)a1 customMaximumPreviewAssetCount:(id)a2 keyAssetLocalIdentifier:(id)a3;
- (void)layoutContentViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)px_surveyQuestionAssetGroupViewMetadataDateRangeStringWithFormatter:(id)a0 assetGroupView:(id)a1;
- (id)px_surveyQuestionAssetGroupViewMetadataLocationString:(id)a0;

@end
