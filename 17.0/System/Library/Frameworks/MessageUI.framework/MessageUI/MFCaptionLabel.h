@class NSArray, EFLazyCache;
@protocol MFCaptionLabelDataSource;

@interface MFCaptionLabel : UILabel {
    BOOL _needsLabelUpdate;
}

@property (class, readonly) EFLazyCache *attributedStringsCache;

@property (weak, nonatomic) id<MFCaptionLabelDataSource> dataSource;
@property (retain, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSArray *ccRecipients;
@property (retain, nonatomic) NSArray *bccRecipients;
@property (retain, nonatomic) NSArray *fromSenders;
@property (retain, nonatomic) NSArray *otherSigners;
@property (nonatomic) BOOL preventAutoUpdatingLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_chevronImage;
- (id)_chevronAttributedString;
- (id)_formattedAttributedString;
- (void)_setNeedsLabelUpdate;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)a0;
- (id)_whitespaceStringWithWidth:(double)a0;
- (void)updateLabelNow;

@end
