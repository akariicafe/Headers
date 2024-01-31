@interface GTReplayFetchPostVertex : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) BOOL objectShaderThreadgroupBoundsPresent;
@property (nonatomic) struct GTPoint3D { unsigned long long x; unsigned long long y; unsigned long long z; } objectShaderThreadgroupBeginBounds;
@property (nonatomic) struct GTPoint3D { unsigned long long x; unsigned long long y; unsigned long long z; } objectShaderThreadgroupEndBounds;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
