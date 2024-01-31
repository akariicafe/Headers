@interface PKFaceIDBannerHandleState : PKBannerHandleState <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long glyphState;

+ (id)createForGlyphState:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
