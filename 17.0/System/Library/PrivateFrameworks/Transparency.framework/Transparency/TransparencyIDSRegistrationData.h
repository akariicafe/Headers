@class NSString, NSData, NSDate, NSError;

@interface TransparencyIDSRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSData *tbsKTIDSRegistrationData;
@property (retain) NSData *signature;
@property (retain) NSData *publicKey;
@property (retain) NSData *pushToken;
@property (retain) NSDate *orderedTimestamp;
@property (retain) NSString *state;
@property (retain) NSError *error;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *signedAt;
@property (retain) NSDate *uploadedAt;
@property (retain) NSDate *nextRetryAt;
@property (retain) NSString *altDSID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)diagnosticsJsonDictionary;
- (id)humanDiagnosticsString;
- (id)initWithApplication:(id)a0 registrationData:(id)a1;

@end
