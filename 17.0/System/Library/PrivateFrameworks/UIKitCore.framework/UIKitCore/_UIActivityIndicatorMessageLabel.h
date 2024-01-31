@class NSDictionary;

@interface _UIActivityIndicatorMessageLabel : UILabel

@property (copy, nonatomic) NSDictionary *regularTextAttributes;
@property (readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes;
@property (readonly, nonatomic) double verticalSpacingToSpinner;

+ (id)defaultRegularContentSizeTextAttributes;

- (void)traitCollectionDidChange:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)a0;
- (double)_effectiveVerticalSpacingToSpinner;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (id)_validatedAttributedString:(id)a0;
- (id)initWithRegularTextAttributes:(id)a0;
- (void)setEffectiveTextAttributes:(id)a0;

@end
