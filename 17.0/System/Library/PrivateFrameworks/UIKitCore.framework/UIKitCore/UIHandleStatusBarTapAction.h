@interface UIHandleStatusBarTapAction : BSAction

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverride;

- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithStatusBarStyleOverride:(unsigned long long)a0;
- (id)initWithStatusBarStyle:(long long)a0;
- (id)initWithStatusBarStyle:(long long)a0 andStatusBarStyleOverride:(unsigned long long)a1;

@end
