@class TLKLabel, SFCommandButtonItem, SearchUIImageView;

@interface SearchUIInfoValueView : NUIContainerStackView

@property (retain, nonatomic) TLKLabel *valueLabel;
@property (retain, nonatomic) SearchUIImageView *imageView;
@property (retain, nonatomic) SFCommandButtonItem *buttonItem;

- (id)init;
- (void).cxx_destruct;
- (void)updateIsInteractable:(BOOL)a0;
- (void)updateWithString:(id)a0 image:(id)a1;

@end
