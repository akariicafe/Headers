@class NSString;

@interface PhotosUICore.PhotosDetailsSharedWithYouWidget : PhotosUICore.PhotosDetailsWidget

@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (id)init;

@end
