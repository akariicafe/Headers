@class NSString, NUComposition, PICompositionController;
@protocol PEAsset;

@interface PEEditSessionEventBuilder : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch;
@property (nonatomic) double enterEditDuration;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;
@property (nonatomic) double autoCalcDuration;
@property (nonatomic) double exitEditDuration;
@property (nonatomic) double editSessionDuration;
@property (nonatomic) long long sessionEntryPoint;
@property (nonatomic) unsigned long long saveActionType;
@property (nonatomic) struct CGSize { double width; double height; } quickCropSelectedAspectRatio;
@property (nonatomic) long long sessionEndReason;
@property (copy, nonatomic) NUComposition *initialComposition;
@property (copy, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion;

+ (id)allowedAdjustmentIdentifiers;

- (void).cxx_destruct;
- (id)buildEvent;
- (BOOL)shouldReportAdjustmentIdentifierString:(id)a0;

@end
