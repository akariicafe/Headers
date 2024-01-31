@class NSArray, NSString;

@interface HKNotificationInstructionDiagnosticDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSArray *propertyNames;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSString *creationDate;
@property (readonly, copy, nonatomic) NSString *receivedDate;
@property (readonly, copy, nonatomic) NSString *modificationDate;
@property (readonly, copy, nonatomic) NSString *sendingDeviceName;
@property (readonly, copy, nonatomic) NSString *sendingDeviceInfo;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *expirationDate;
@property (readonly, copy, nonatomic) NSString *criteria;
@property (readonly, copy, nonatomic) NSString *isInvalid;
@property (readonly, copy, nonatomic) NSArray *propertyValues;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageIdentifier:(id)a0 creationDate:(id)a1 receivedDate:(id)a2 modificationDate:(id)a3 sendingDeviceName:(id)a4 sendingDeviceInfo:(id)a5 action:(id)a6 clientIdentifier:(id)a7 categoryIdentifier:(id)a8 expirationDate:(id)a9 criteria:(id)a10 isInvalid:(id)a11;

@end
