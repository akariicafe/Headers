@class NSData, HMDVideoCodec, HMDVideoCodecParameters, HMDVideoAttributes, HMDSelectedRTPParameters;

@interface HMDSelectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HMDVideoCodec *codec;
@property (readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters;
@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes;
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithCodec:(id)a0 codecParameter:(id)a1 attribute:(id)a2 rtpParameter:(id)a3;

@end
