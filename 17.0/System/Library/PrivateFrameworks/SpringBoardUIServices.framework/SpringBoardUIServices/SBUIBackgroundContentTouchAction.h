@interface SBUIBackgroundContentTouchAction : BSAction

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;

- (id)initWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
