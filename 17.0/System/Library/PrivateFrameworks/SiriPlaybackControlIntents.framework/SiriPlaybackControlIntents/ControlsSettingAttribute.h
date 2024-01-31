@interface ControlsSettingAttribute : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long settingName;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
