@interface ICNotesEditorSettings : PTSettings

@property (nonatomic) double snapToPDFWhileDraggingDistance;
@property (nonatomic) double snapToPDFWhileDraggingVelocityLimit;
@property (nonatomic) double snapToPDFDistanceForEndDragging;
@property (nonatomic) double attachmentViewSnapToContentHeightThreshold;
@property (nonatomic, getter=isRubberBandingEnabled) BOOL rubberBandingEnabled;
@property (nonatomic) double rubberBandRange;
@property (nonatomic) double rubberBandDragDistance;
@property (nonatomic) double rubberBandCatchUpAnimationDuration;
@property (nonatomic) BOOL zoomOutOnScroll;
@property (nonatomic) BOOL stickyHeaderWhenZoomed;
@property (nonatomic) BOOL pageShadowEnabled;
@property (nonatomic) double maxShadowOpacity;
@property (nonatomic) double shadowLength;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
