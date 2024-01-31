@class HMDSessionControl, HMDReselectedVideoParameters, NSData;

@interface HMDReselectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDSessionControl *sessionControl;
@property (readonly, copy, nonatomic) HMDReselectedVideoParameters *videoParameters;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithSessionControl:(id)a0;
- (id)initWithSessionControl:(id)a0 videoParameters:(id)a1;

@end
