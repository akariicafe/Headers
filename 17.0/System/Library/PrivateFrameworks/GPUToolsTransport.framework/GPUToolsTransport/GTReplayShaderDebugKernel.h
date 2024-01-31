@interface GTReplayShaderDebugKernel : GTReplayShaderDebugRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct GTPoint3D { unsigned long long x; unsigned long long y; unsigned long long z; } minThreadPositionInGrid;
@property (nonatomic) struct GTPoint3D { unsigned long long x; unsigned long long y; unsigned long long z; } maxThreadPositionInGrid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
