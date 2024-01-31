@class NSString, NSData;

@interface DAKeySharingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL mockRefreshInstanceCA;
@property (readonly, nonatomic) unsigned long long profile;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSData *metaData;
@property (readonly, nonatomic) long long targetDeviceType;
@property (readonly, nonatomic) BOOL enableVehicleEnteredPasscode;
@property (readonly, nonatomic) unsigned long long maxRetriesForDeviceEnteredPasscode;
@property (readonly, nonatomic) NSString *deviceEnteredPasscode;
@property (readonly, nonatomic) NSString *proprietaryEntitlements;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithProfile:(unsigned long long)a0 displayName:(id)a1 metaData:(id)a2 targetDeviceType:(long long)a3;
- (id)initWithProfile:(unsigned long long)a0 displayName:(id)a1 metaData:(id)a2 targetDeviceType:(long long)a3 enableVehiclePasscode:(BOOL)a4 maxRetriesForDevicePasscode:(unsigned long long)a5 deviceEnteredPasscode:(id)a6 proprietaryEntitlements:(id)a7;

@end
