@interface ACUISActivitySceneAction : BSAction

@property (readonly, nonatomic) long long command;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)initWithCommand:(long long)a0;

@end
