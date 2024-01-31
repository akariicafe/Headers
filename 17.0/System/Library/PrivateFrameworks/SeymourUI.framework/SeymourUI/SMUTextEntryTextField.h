@interface SMUTextEntryTextField : UITextField

@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) unsigned long long maxLength;

- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertText:(id)a0;
- (void)setText:(id)a0;
- (id)text;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_filteredRangeForText:(id)a0;

@end
