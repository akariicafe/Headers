@class BlastDoorPassPreview_PassImage, NSString, BlastDoorPassPreview_PassBackground, BlastDoorColor, BlastDoorPassPreview_PassText;

@interface BlastDoorPassPreview : NSObject {
    void /* unknown type, empty encoding */ passPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *headerImage;
@property (nonatomic, readonly) BlastDoorPassPreview_PassImage *icon;
@property (nonatomic, readonly) BlastDoorPassPreview_PassBackground *background;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *primaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *secondaryText;
@property (nonatomic, readonly) BlastDoorPassPreview_PassText *tertiaryText;
@property (nonatomic, readonly) BlastDoorColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;

@end
