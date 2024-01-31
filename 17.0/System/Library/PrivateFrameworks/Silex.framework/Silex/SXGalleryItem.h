@class NSString, SXFormattedText;

@interface SXGalleryItem : SXJSONObject

@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) SXFormattedText *captionComponent;

@end
