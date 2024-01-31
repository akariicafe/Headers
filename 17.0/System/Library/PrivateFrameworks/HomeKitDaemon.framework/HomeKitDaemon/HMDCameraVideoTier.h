@class NSNumber, HMDVideoResolution;

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMDVideoResolution *videoResolution;
@property (readonly, nonatomic) NSNumber *maxBitRate;
@property (readonly, nonatomic) NSNumber *minBitRate;
@property (readonly, nonatomic) NSNumber *rtcpInterval;
@property (retain, nonatomic) NSNumber *framerate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoResolution:(id)a0 framerate:(id)a1 minBitRate:(id)a2 maxBitRate:(id)a3 rtcpInterval:(id)a4;

@end
