@class UIStackView, NSString, UIImageView, GEOComposedRouteAdvisoryItem;
@protocol IncidentExtendedDetailCellDelegate;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {
    UIStackView *_stackView;
    UIImageView *_imageView;
    GEOComposedRouteAdvisoryItem *_advisoryItem;
}

@property (weak, nonatomic) id<IncidentExtendedDetailCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setConstraints;
- (void)_didTapActionButton;
- (void)configureWithAdvisoryItem:(id)a0;
- (id)customBodyTextView;

@end
