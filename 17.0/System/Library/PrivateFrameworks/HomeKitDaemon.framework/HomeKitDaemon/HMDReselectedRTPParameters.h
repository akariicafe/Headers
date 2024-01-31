@class NSNumber, NSData;

@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *maximumBitrate;
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate;
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithMaximumBitrate:(id)a0 minimumBitrate:(id)a1 rtcpInterval:(id)a2;

@end
