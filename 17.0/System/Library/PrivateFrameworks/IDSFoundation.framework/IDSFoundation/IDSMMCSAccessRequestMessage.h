@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage

@property (retain, nonatomic) NSArray *downloadAuths;
@property (retain, nonatomic) NSData *downloadingDeviceToken;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *downloadingDeviceID;
@property (retain, nonatomic) NSString *senderID;

- (id)init;
- (long long)command;
- (long long)responseCommand;
- (void).cxx_destruct;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
