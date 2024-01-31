@class PURemotePasscodePolicy;

@interface PURemoteDeviceState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int version;
@property (nonatomic, getter=hasPasscodeSet) BOOL passcodeSet;
@property (nonatomic, getter=isPasscodeLocked) BOOL passcodeLocked;
@property (nonatomic, getter=isUnlockOnly) BOOL unlockOnly;
@property (nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;
@property (retain, nonatomic) PURemotePasscodePolicy *passcodePolicy;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
