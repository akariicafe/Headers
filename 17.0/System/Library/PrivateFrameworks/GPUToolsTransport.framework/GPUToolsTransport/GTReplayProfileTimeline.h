@interface GTReplayProfileTimeline : GTReplayProfileRequest

@property (nonatomic) BOOL shaderProfiling;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
