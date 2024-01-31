@class NSString, ICAttachmentPreviewGeneratorOperationQueue, NSMutableDictionary, NSObject, NSMutableSet, NSMutableOrderedSet, NSMapTable;
@protocol OS_dispatch_queue, ICProgressIndicatorTracking;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate, ICAttachmentPreviewGenerating>

@property (class, readonly, nonatomic) ICAttachmentPreviewGenerator *sharedGenerator;
@property (class, readonly, nonatomic) BOOL docCamOCRGenerationEnabled;
@property (class, readonly, nonatomic) BOOL imageOCRGenerationEnabled;
@property (class, readonly, nonatomic) BOOL imageClassificationEnabled;

@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue;
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID;
@property (retain, nonatomic) NSMutableSet *attachmentIDsPending;
@property (retain, nonatomic) NSMutableDictionary *attachmentIDsProgress;
@property (retain, nonatomic) id<ICProgressIndicatorTracking> progressTracker;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *postProcessingQueue;
@property (retain, nonatomic) NSMutableOrderedSet *postProcessingIDsPending;
@property unsigned long long postProcessingRequestIndex;
@property unsigned long long previewGenerationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewProgressQueue;
@property (nonatomic) _Atomic BOOL shouldGenerateAttachmentsWhenReachable;
@property (readonly, nonatomic) BOOL previewOperationsIdle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)purgeImageClassificationsInContext:(id)a0;
+ (void)purgeOCRInContext:(id)a0;
+ (void)setImageClassificationTemporarilyDisabled:(BOOL)a0;
+ (BOOL)universalSearchProcessingLibraryEnabled;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)reachabilityChanged:(id)a0;
- (void)resume;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)a0;
- (void)adjustUserTitleIfNecessaryForAttachment:(id)a0;
- (void)attachmentDidLoad:(id)a0;
- (void)attachmentNeedsPostProcessingNotification:(id)a0;
- (void)attachmentNeedsPreviewGenerationNotification:(id)a0;
- (void)attachmentWillBeDeleted:(id)a0;
- (void)beginPostProcessingAfterDelayIfNecessaryWithForceDelay:(BOOL)a0;
- (void)cancelGenerationOfPendingPreviews;
- (void)cancelIfNeededForAttachment:(id)a0;
- (void)disableAutomaticPreviewGeneration;
- (void)enableAutomaticPreviewGeneration;
- (void)fetchMissingOrOutdatedImageClassificationSummaryAttachmentIDsInContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchMissingOrOutdatedMetaDataAttachmentIDsInContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchMissingOrOutdatedOCRSummaryAttachmentIDsInContext:(id)a0 completion:(id /* block */)a1;
- (void)generateMissingOrOutdatedAttachmentMetaDataIfNeededInContext:(id)a0;
- (void)generatePendingPreviewForAttachment:(id)a0;
- (void)generatePendingPreviews;
- (void)generatePreviewIfNeededForAttachment:(id)a0;
- (void)generatePreviewIfNeededForAttachmentWithObjectID:(id)a0;
- (void)generatePreviewsIfNeeded;
- (BOOL)isPreviewGenerationSupported;
- (void)mediaDidLoad:(id)a0;
- (void)operationComplete:(id)a0;
- (void)postProcessIfNeededForAttachment:(id)a0;
- (void)postProcessPendingPreviews;
- (void)postProcessPreviewForAttachment:(id)a0;
- (id)progressForObjectID:(id)a0;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (void)setProgress:(id)a0 forObjectID:(id)a1;

@end
