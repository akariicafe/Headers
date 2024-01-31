@class NSString, NSUUID, NSData, NSDate;

@interface RPNearFieldTapEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *applicationLabel;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL isSameAccount;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSData *pkData;
@property (readonly, nonatomic) NSUUID *bonjourListenerUUID;
@property (readonly, nonatomic) BOOL shouldForceSingleBandAWDLMode;
@property (readonly, nonatomic) BOOL isKnownIdentity;

- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 applicationLabel:(id)a1 pkData:(id)a2 bonjourListenerUUID:(id)a3 isSameAccount:(BOOL)a4 contactID:(id)a5 forceSingleBandAWDLMode:(BOOL)a6 knownIdentity:(BOOL)a7;

@end
