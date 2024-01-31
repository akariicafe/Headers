@class NSData, NSNumber, NSDate;

@interface IDSKTRegistrationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *ktDataForRegistration;
@property (retain, nonatomic) NSData *ktPublicAccountKey;
@property (retain, nonatomic) NSData *ktDataSignature;
@property (retain, nonatomic) NSDate *registeredTime;
@property (nonatomic) BOOL uploadedToKVS;
@property (retain, nonatomic) NSDate *ktAccountKeyTimestamp;
@property (retain, nonatomic) NSDate *ktOptInTimestamp;
@property (nonatomic) unsigned long long ktOptInStatus;
@property (retain, nonatomic) NSNumber *ktAccountKeyErrorCode;
@property (retain, nonatomic) NSNumber *ktOptInErrorCode;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)needsKVSUpload;

@end
