@class ICNoteDateFormatterController, UIFont, UIImageView, ICSelectorDelayer, UILabel, ICNote, NSString;

@interface ICNoteEditorDateView : UIView <ICNoteDateFormatterControllerDelegate>

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) ICNoteDateFormatterController *formatterController;
@property (nonatomic) double dateViewMaximumWidthOnPreviousTextChange;
@property (retain, nonatomic) ICSelectorDelayer *dateViewLayoutUpdateDelayer;
@property (nonatomic) double cachedHeight;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) double preferredHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newDateView;

- (id)accessibilityLabel;
- (void)updateLayoutIfNecessary;
- (void)_updateLayout;
- (void)reset;
- (void)dealloc;
- (id)accessibilityElements;
- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)accessibilityUserInputLabels;
- (id)accessibilityContainer;
- (BOOL)_accessibilityScrollToVisible;
- (void)dateViewDidTap:(id)a0;
- (id)dateViewAttributes;
- (double)dateViewMaximumWidth;
- (void)formatter:(id)a0 iconHiddenDidChange:(BOOL)a1;
- (void)formatter:(id)a0 iconImageDidChange:(id)a1;
- (void)formatter:(id)a0 textDidChange:(id)a1;
- (BOOL)iconHidden;

@end
