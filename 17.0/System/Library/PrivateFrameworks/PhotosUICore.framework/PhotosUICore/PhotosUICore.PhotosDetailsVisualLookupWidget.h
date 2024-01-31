@class PXPhotosDetailsContext, NSString;

@interface PhotosUICore.PhotosDetailsVisualLookupWidget : PhotosUICore.PhotosDetailsWidget {
    void /* unknown type, empty encoding */ contextObservation;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ widgetInteractionDelegate;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (id)init;
- (void).cxx_destruct;

@end
