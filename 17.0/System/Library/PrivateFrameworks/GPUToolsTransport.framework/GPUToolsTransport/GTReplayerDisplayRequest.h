@interface GTReplayerDisplayRequest : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) union { struct { int dispatchIndex; int dispatchICBIndex; } ; unsigned long long uid; } dispatchUID;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned int index;
@property (nonatomic) int filters;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
