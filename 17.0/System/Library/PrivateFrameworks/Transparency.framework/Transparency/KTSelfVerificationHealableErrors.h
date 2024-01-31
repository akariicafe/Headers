@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface KTSelfVerificationHealableErrors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *_accountHealableErrors;
@property (retain) NSMutableDictionary *_deviceIdToHealableErrors;
@property unsigned long long healableState;
@property (readonly) NSArray *accountHealableErrors;
@property (readonly) NSDictionary *deviceIdToHealableErrors;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAccountHealableError:(unsigned long long)a0;
- (void)addDeviceHealableError:(unsigned long long)a0 deviceId:(id)a1;
- (void)addHealableState:(unsigned long long)a0;
- (void)removeHealableState:(unsigned long long)a0;

@end
