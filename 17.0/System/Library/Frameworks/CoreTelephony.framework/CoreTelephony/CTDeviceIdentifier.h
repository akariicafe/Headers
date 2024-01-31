@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *modelName;
@property (nonatomic) unsigned long long deviceType;
@property (retain, nonatomic) NSString *EID;
@property (retain, nonatomic) NSString *IMEI;
@property (retain, nonatomic) NSString *idsDeviceId;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceType:(unsigned long long)a0 EID:(id)a1 IMEI:(id)a2 idsDeviceId:(id)a3;

@end
