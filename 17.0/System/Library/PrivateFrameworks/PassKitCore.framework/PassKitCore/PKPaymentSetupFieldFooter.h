@class NSAttributedString;

@interface PKPaymentSetupFieldFooter : PKPaymentSetupFieldLabel

@property (nonatomic) unsigned long long fontScale;
@property (copy, nonatomic) NSAttributedString *body;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 body:(id)a1;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
