@interface SFAccountManagerTipContentCell : SFAccountManagerPlatterWithDeclineButtonCell

@property (readonly, nonatomic) long long tipType;

+ (unsigned long long)contentInset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForTip:(long long)a0;

@end
