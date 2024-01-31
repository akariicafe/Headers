@interface HACCStackView : UIStackView

+ (double)separatorHeight;

- (void)removeArrangedSubview:(id)a0;
- (void)addArrangedSubview:(id)a0 andSeparator:(BOOL)a1 withIndent:(double)a2 withDarkBackground:(BOOL)a3;
- (void)addArrangedSubview:(id)a0 withPartialSeparator:(BOOL)a1;
- (void)addArrangedSubview:(id)a0 withPartialSeparator:(BOOL)a1 withDarkBackground:(BOOL)a2;
- (void)addArrangedSubview:(id)a0 withSeparator:(BOOL)a1;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1 andSeparator:(BOOL)a2 withIndent:(double)a3 withDarkBackground:(BOOL)a4;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1 withPartialSeparator:(BOOL)a2;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1 withPartialSeparator:(BOOL)a2 withDarkBackground:(BOOL)a3;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1 withSeparator:(BOOL)a2;

@end
