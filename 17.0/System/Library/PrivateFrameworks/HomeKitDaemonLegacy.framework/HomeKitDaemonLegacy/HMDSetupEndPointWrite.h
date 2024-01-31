@class NSUUID, HMDEndPointAddress, HMDSRTPParameters, NSData;

@interface HMDSetupEndPointWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, copy, nonatomic) HMDEndPointAddress *address;
@property (readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters;
@property (readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (BOOL)_parseFromTLVDataImpl;
- (BOOL)_parseFromTLVDataOnFailure;
- (BOOL)_parseFromTLVDataOnSuccess;
- (id)initWithSessionIdentifier:(id)a0 address:(id)a1 videoSrtpParameters:(id)a2 audioSrtpParameters:(id)a3;

@end
