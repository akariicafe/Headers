@interface GTReplayShaderDebugFragment : GTReplayShaderDebugRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct GTPoint2D { unsigned long long x; unsigned long long y; } minPixelPosition;
@property (nonatomic) struct GTPoint2D { unsigned long long x; unsigned long long y; } maxPixelPosition;
@property (nonatomic) unsigned int minSampleID;
@property (nonatomic) unsigned int maxSampleID;
@property (nonatomic) unsigned int renderTargetArrayIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
