@class SKUIReviewMetadata, NSString, SKUIStarRatingButtonControl, SKUIComposeTextFieldListView, UIResponder, SKStarRatingControl;
@protocol SKUIComposeReviewHeaderDelegate;

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate, SKUIStarRatingButtonControlDelegate> {
    SKStarRatingControl *_ratingControl;
    SKUIStarRatingButtonControl *_buttonRatingControl;
    SKUIComposeTextFieldListView *_textFieldListView;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id<SKUIComposeReviewHeaderDelegate> delegate;
@property (retain, nonatomic) SKUIReviewMetadata *review;
@property (readonly, nonatomic) UIResponder *initialFirstResponder;
@property (nonatomic) float rating;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)dealloc;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)numberOfColumnsInTextFieldList:(id)a0;
- (void)textFieldListValidityDidChange:(id)a0;
- (long long)numberOfFieldsInTextFieldList:(id)a0;
- (void)starRatingButtonControlDidUpdateValues;
- (void)starRatingControlDidUpdateValues:(id)a0;
- (id)textFieldList:(id)a0 configurationForFieldAtIndex:(unsigned long long)a1;
- (void)textFieldListValuesDidChange:(id)a0;

@end
