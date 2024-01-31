@class NSData;

@interface SPRPINData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *pinBlock;
@property (readonly, copy, nonatomic) NSData *casd;
@property (readonly, copy, nonatomic) NSData *pinAppletAttestationData;
@property (readonly, copy, nonatomic) NSData *pinKEKHash;
@property (readonly, nonatomic) BOOL isPinBypass;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPinBlock:(id)a0 casd:(id)a1 pinAppletAttestationData:(id)a2 pinKEKHash:(id)a3;
- (id)initWithPinBlock:(id)a0 casd:(id)a1 pinAppletAttestationData:(id)a2 pinKEKHash:(id)a3 isPinBypass:(BOOL)a4;

@end
