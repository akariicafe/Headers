@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {
    UIColor *_errorColor;
}

@property (nonatomic) BOOL hasError;

- (void)dealloc;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
