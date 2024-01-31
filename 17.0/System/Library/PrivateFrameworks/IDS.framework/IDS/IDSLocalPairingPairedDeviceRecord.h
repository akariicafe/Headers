@class NSUUID;

@interface IDSLocalPairingPairedDeviceRecord : IDSLocalPairingRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *cbuuid;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_publicIdenityForDataProtectionClass:(unsigned int)a0 error:(id *)a1;
- (id)initWithCBUUID:(id)a0 publicIdentityDataClassA:(id)a1 classC:(id)a2 classD:(id)a3;
- (id)publicIdentityClassA:(id *)a0;
- (id)publicIdentityClassC:(id *)a0;
- (id)publicIdentityClassD:(id *)a0;

@end
