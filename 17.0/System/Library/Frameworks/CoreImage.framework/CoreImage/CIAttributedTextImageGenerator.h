@class NSNumber, NSAttributedString;

@interface CIAttributedTextImageGenerator : CIFilter

@property (retain, nonatomic) NSAttributedString *inputText;
@property (retain, nonatomic) NSNumber *inputScaleFactor;
@property (retain, nonatomic) NSNumber *inputPadding;

+ (id)customAttributes;

- (id)outputImage;

@end
