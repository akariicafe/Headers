@class SBPIPEdgeResizeAnchorPointSettings;

@interface SBPIPEdgeResizeSettings : PTSettings

@property (retain, nonatomic) SBPIPEdgeResizeAnchorPointSettings *anchorPointSettings;
@property (nonatomic) BOOL disableCornerResizeForButtons;
@property (nonatomic) BOOL blurNoteWhileResizing;
@property (nonatomic) double liveResizePointerInteractionRegionOuterLength;
@property (nonatomic) double liveResizePointerInteractionRegionInnerLength;
@property (nonatomic) double liveResizePointerInteractionRegionCornerLength;
@property (nonatomic) double hysteresis;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
