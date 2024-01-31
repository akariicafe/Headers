@class NSString, HDNotificationInstructionCriteria, NSDate;

@interface HDNotificationInstruction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *messageIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSString *sendingDeviceName;
@property (readonly, copy, nonatomic) NSString *sendingDeviceInfo;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) HDNotificationInstructionCriteria *criteria;
@property (readonly, nonatomic) BOOL isInvalid;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessageIdentifier:(id)a0 creationDate:(id)a1 receivedDate:(id)a2 modificationDate:(id)a3 sendingDeviceName:(id)a4 sendingDeviceInfo:(id)a5 action:(long long)a6 clientIdentifier:(id)a7 categoryIdentifier:(id)a8 expirationDate:(id)a9 criteria:(id)a10 isInvalid:(BOOL)a11;
- (id)initWithMessageIdentifier:(id)a0 receivedDate:(id)a1 sendingDeviceName:(id)a2 message:(id)a3;
- (long long)isValidWithDatabaseTransaction:(id)a0 date:(id)a1 error:(id *)a2;

@end
