@class NSString;

@interface VSCredentialEntryField : NSObject

@property (copy, nonatomic) NSString *recentsTitle;
@property (copy, nonatomic) NSString *recentsMessage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) long long keyboardType;
@property (nonatomic, getter=isSecure) BOOL secure;
@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isRequired) BOOL required;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long returnKeyType;
@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;

@end
