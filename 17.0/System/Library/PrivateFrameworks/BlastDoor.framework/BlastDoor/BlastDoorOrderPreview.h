@class BlastDoorOrderPreview_OrderImage, NSString, BlastDoorColor, BlastDoorOrderPreview_OrderText;

@interface BlastDoorOrderPreview : NSObject {
    void /* unknown type, empty encoding */ orderPreview;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderImage *headerImage;
@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *primaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *secondaryText;
@property (nonatomic, readonly) BlastDoorOrderPreview_OrderText *tertiaryText;

- (id)init;
- (void).cxx_destruct;

@end
