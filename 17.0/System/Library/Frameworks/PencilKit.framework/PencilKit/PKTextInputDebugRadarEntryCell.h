@class UIView, NSString, UIImageView, UIButton, UITextField, NSLayoutConstraint, PKTextInputDebugLogEntry, UILabel;
@protocol PKTextInputDebugRadarEntryCellDelegate;

@interface PKTextInputDebugRadarEntryCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *_borderView;
@property (readonly, nonatomic) UIButton *_includedButton;
@property (readonly, nonatomic) UIImageView *_drawingImageView;
@property (readonly, nonatomic) UILabel *_resultTextLabel;
@property (readonly, nonatomic) UITextField *_intendedResultField;
@property (readonly, nonatomic) UIView *_lineSeparator;
@property (retain, nonatomic) NSLayoutConstraint *_drawingViewAspectRatioConstraint;
@property (weak, nonatomic) id<PKTextInputDebugRadarEntryCellDelegate> delegate;
@property (readonly, nonatomic) PKTextInputDebugLogEntry *logEntry;
@property (readonly, nonatomic) long long contentLevel;
@property (nonatomic) BOOL includedEntry;
@property (nonatomic) long long entryIndex;
@property (copy, nonatomic) NSString *intendedText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void).cxx_destruct;
- (id)_attributedResultTextWithReferenceString:(id)a0 referenceStringOffset:(long long)a1 recognitionResult:(id)a2 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 resultType:(long long)a4 contentLength:(long long)a5;
- (id)_createIncludedButton;
- (id)_createIntendedField;
- (void)_handleIncludedButton;
- (void)_handleIntendedFieldChanged;
- (void)_setIncludedEntry:(BOOL)a0 notifyDelegate:(BOOL)a1;
- (void)_setIntendedText:(id)a0 notifyDelegate:(BOOL)a1;
- (void)_updateBorderView;
- (void)_updateDrawingView;
- (void)_updateIncludedButton;
- (void)_updateIntendedTextField;
- (void)_updateResultTextLabel;
- (void)setLogEntry:(id)a0 contentLevel:(long long)a1;

@end
