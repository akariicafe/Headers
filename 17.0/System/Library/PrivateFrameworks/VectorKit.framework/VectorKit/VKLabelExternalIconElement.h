@interface VKLabelExternalIconElement : NSObject <NSSecureCoding> {
    struct LabelExternalIconElement { struct Matrix<float, 2, 1> { float _e[2]; } size; struct Matrix<float, 2, 1> { float _e[2]; } anchorPoint; BOOL isRound; unsigned char minZoom; } _element;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (const void *)element;
- (id)initWithIconElement:(const void *)a0;
- (id)initWithCoder:(id)a0;

@end
