@class UIFont, NSString, SFSearchResult, SearchUICompletion, SFCardSection, SPUICompletionStringModel, SPUIMaskedLabelsStackView, SearchUIImageView, UIColor;

@interface SPUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) SPUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (retain) SFCardSection *cardSection;
@property BOOL focusIsOnFirstResult;
@property (retain) SearchUICompletion *completion;
@property (retain, nonatomic) SPUICompletionStringModel *searchFieldModel;
@property (retain, nonatomic) UIFont *fontForCompletionLabel;
@property (retain, nonatomic) UIColor *textColorForCompletionLabel;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (readonly) NSString *completionText;
@property (readonly) double trailingPaddingForFieldEditor;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasPrefix;
@property (readonly) NSString *copyableString;
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;
- (void)didUpdateWithImage:(id)a0;
- (id)extensionLabel;
- (id)bridgeLabel;
- (void)didFailToLoadImage;
- (id)completionLabel;
- (void)updateFields;
- (void).cxx_destruct;
- (void)updateLayoutMargins;

@end
