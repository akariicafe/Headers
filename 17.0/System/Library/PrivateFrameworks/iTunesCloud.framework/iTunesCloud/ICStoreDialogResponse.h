@class NSString, NSArray, NSDictionary;

@interface ICStoreDialogResponse : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic, getter=isInitialCheckboxValue) BOOL initialCheckboxValue;
@property (readonly, nonatomic, getter=isBiometricAuthenticationAllowed) BOOL biometricAuthenticationAllowed;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) long long defaultButtonType;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_buttonActionKeyForType:(long long)a0;
- (id)_buttonTitleKeyForType:(long long)a0;
- (id)_buttonWithType:(long long)a0;

@end
