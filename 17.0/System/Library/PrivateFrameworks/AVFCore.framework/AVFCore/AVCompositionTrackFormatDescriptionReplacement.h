@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {
    struct opaqueCMFormatDescription { } *_originalFormatDescription;
    struct opaqueCMFormatDescription { } *_replacementFormatDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct opaqueCMFormatDescription { } *originalFormatDescription;
@property (readonly) struct opaqueCMFormatDescription { } *replacementFormatDescription;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginalFormatDescription:(struct opaqueCMFormatDescription { } *)a0 andReplacementFormatDescription:(struct opaqueCMFormatDescription { } *)a1;

@end
