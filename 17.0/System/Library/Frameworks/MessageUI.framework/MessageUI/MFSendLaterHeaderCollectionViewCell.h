@class UIStackView, NSString, UIDatePicker, MFSendLaterHeaderCollectionViewHelper;
@protocol MFSendLaterHeaderCollectionViewCellDelegate;

@interface MFSendLaterHeaderCollectionViewCell : UICollectionViewCell <_UIDatePickerCompactStyleDelegate>

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) MFSendLaterHeaderCollectionViewHelper *viewHelper;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) long long currentVisibleComponent;
@property (weak, nonatomic) id<MFSendLaterHeaderCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_datePicker:(id)a0 didSelectComponent:(long long)a1;
- (void)updateActiveComponent:(long long)a0;
- (void)updateWithDate:(id)a0 timeZone:(id)a1;

@end
