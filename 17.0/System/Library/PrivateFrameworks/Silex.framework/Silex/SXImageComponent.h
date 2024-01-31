@class NSString, NSAttributedString;

@interface SXImageComponent : SXComponent

@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL userControllable;
@property (readonly, nonatomic) BOOL shouldBeExposedToAssistiveTechnology;
@property (readonly, nonatomic) NSAttributedString *captionWithLocalizedRoleForSpeaking;

+ (id)typeString;

- (unsigned long long)traits;

@end
