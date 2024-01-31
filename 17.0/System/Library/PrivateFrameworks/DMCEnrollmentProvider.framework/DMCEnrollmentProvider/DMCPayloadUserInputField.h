@class NSNumber, NSString, NSMutableDictionary;

@interface DMCPayloadUserInputField : NSObject {
    NSMutableDictionary *_fieldDictionary;
    id _response;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int flags;
@property (readonly, nonatomic) NSNumber *minimumLength;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *fieldDescription;
@property (readonly, nonatomic) NSString *retypeDescription;
@property (readonly, nonatomic) NSString *mismatchDescription;
@property (retain, nonatomic) NSString *finePrint;
@property (readonly, nonatomic) NSString *defaultValue;
@property (readonly, nonatomic) NSString *placeholderValue;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long capitalizationType;
@property (readonly, nonatomic) BOOL isRequired;
@property (readonly, nonatomic) BOOL isPassword;
@property (readonly, nonatomic) BOOL needsRetype;
@property (readonly, nonatomic) BOOL isDevicePasscodeField;

- (id)responseDictionary;
- (id)_uuid;
- (id)description;
- (void).cxx_destruct;
- (void)setUserResponse:(id)a0;
- (id)initWithFieldDictionary:(id)a0;

@end
