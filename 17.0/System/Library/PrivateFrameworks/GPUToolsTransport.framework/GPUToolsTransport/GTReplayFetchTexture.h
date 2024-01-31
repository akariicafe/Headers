@interface GTReplayFetchTexture : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned int slice;
@property (nonatomic) unsigned int level;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int plane;
@property (nonatomic) struct GTSize { unsigned long long width; unsigned long long height; unsigned long long depth; } size;
@property (nonatomic) struct GTRegion { struct GTPoint3D { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct GTSize { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } region;
@property (nonatomic) BOOL resolveMultisampleTexture;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
