@class CHSWidgetTintParameters, NSString;

@interface CHSScreenshotPresentationAttributes : NSObject

@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) BOOL allowsPrivacySensitiveContent;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) NSString *additionalSettingsContext;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
