@class NSData, HMDSRTPCryptoSuite;

@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite;
@property (readonly, copy, nonatomic) NSData *srtpMasterKey;
@property (readonly, copy, nonatomic) NSData *srtpMasterSalt;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (BOOL)compatibleWithRemoteEndPoint:(id)a0;
- (id)initWithCryptoSuite:(id)a0 masterKey:(id)a1 masterSalt:(id)a2;

@end
