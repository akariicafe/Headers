@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *protocolType;
@property (retain, nonatomic) NSString *uniqueDeviceID;
@property (retain, nonatomic) NSString *uniqueClientID;
@property (retain, nonatomic) NSString *pairingUUID;
@property (nonatomic) unsigned long long epoch;
@property (nonatomic) BOOL isInitiator;
@property long long timeout;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithProtocolType:(id)a0 uniqueDeviceID:(id)a1 uniqueClientID:(id)a2 pairingUUID:(id)a3 epoch:(unsigned long long)a4 isInitiator:(BOOL)a5;

@end
