@class NSString;

@interface PhotosUICore.PhotosDetailsSavedFromAppsWidget : PhotosUICore.PhotosDetailsWidget

@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (id)init;

@end
