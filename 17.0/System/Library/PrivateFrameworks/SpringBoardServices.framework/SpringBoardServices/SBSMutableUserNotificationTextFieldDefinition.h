@class NSString;

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;

- (void)setAutocorrectionType:(long long)a0;
- (void)setAutocapitalizationType:(long long)a0;
- (void)setKeyboardType:(long long)a0;
- (void)setSecure:(BOOL)a0;
- (void)setMaxLength:(unsigned long long)a0;
- (void)setTitle:(id)a0;
- (void)setValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
