@class UIColor, NSString, LPCaptionBarPresentationProperties, LPImage, LPVideo;

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>

@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (copy, nonatomic) NSString *topCaption;
@property (copy, nonatomic) NSString *bottomCaption;
@property (copy, nonatomic) NSString *trailingTopCaption;
@property (copy, nonatomic) NSString *trailingBottomCaption;
@property (copy, nonatomic) NSString *mediaTopCaption;
@property (copy, nonatomic) NSString *mediaBottomCaption;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)style;

@end
