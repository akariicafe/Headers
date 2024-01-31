@class PREditingLookProperties, NSString, PRTimeFontConfiguration;

@interface PRMutableEditingLook : PREditingLook

@property (retain, nonatomic) PREditingLookProperties *initialProperties;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) PRTimeFontConfiguration *initialTimeFontConfiguration;
@property (copy, nonatomic) id initialTitleColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 initialTimeFontConfiguration:(id)a2 initialTitleColor:(id)a3;

@end
