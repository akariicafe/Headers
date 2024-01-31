@class NSString, SXFormattedText;

@interface SXScalableImageComponent : SXComponent

@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL userControllable;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) SXFormattedText *captionComponent;

+ (id)typeString;

- (unsigned long long)traits;

@end
