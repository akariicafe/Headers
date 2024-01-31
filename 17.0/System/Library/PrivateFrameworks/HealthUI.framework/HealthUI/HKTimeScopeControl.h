@class NSArray;

@interface HKTimeScopeControl : UIControl {
    NSArray *_timeScopes;
    BOOL _shortTextStyle;
}

@property (nonatomic) long long selectedTimeScope;

+ (id)controlWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeScopes:(id)a1;

- (void).cxx_destruct;
- (double)minimumWidth;
- (long long)_indexForTimeScope:(long long)a0;
- (long long)_timeScopeForIndex:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeScopes:(id)a1;

@end
