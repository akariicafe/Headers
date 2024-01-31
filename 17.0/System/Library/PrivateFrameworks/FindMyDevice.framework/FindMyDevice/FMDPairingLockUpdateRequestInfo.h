@class NSString;

@interface FMDPairingLockUpdateRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pairingCheckToken;
@property (retain, nonatomic) NSString *lostModePubKey;
@property (retain, nonatomic) NSString *userPrivateKey;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *timeStamp;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
