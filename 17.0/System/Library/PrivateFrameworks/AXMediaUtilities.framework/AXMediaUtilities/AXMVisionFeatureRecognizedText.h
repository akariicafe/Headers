@class VNRecognizedText;

@interface AXMVisionFeatureRecognizedText : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNRecognizedText *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRecognizedText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
