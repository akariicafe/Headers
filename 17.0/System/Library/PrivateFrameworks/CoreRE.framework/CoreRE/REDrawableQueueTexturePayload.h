@class REDrawableQueuePayload, RESharedResourcePayload;

@interface REDrawableQueueTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) REDrawableQueuePayload *drawableQueue;
@property (readonly, nonatomic) RESharedResourcePayload *placeholderTexture;

+ (BOOL)supportsSecureCoding;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDrawableQueue:(id)a0 placeholderTexture:(id)a1;

@end
