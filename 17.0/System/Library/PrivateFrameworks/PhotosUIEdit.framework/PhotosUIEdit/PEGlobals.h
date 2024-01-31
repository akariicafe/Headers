@interface PEGlobals : NSObject

@property (class, readonly, nonatomic) PEGlobals *sharedInstance;

@property (nonatomic) BOOL smartCopyPasteReviewUIEnabled;
@property (nonatomic) double smartCopyPasteSimilarityGatingThreshold;
@property (nonatomic) BOOL smartCopyPasteGateOnCaptureTime;
@property (nonatomic) BOOL affectManuallyEditedSlidersOnly;
@property (nonatomic) BOOL fetchAndSendScenePrintsForSliderNet;

- (id)init;

@end
