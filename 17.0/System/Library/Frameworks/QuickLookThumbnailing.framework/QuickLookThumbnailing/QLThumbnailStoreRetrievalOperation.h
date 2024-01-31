@class NSObject, GSAddition, NSDictionary, NSURL, NSError, NSData, QLThumbnailAddition;
@protocol QLThumbnailGenerationRequest, NSXPCProxyCreating, OS_os_activity;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
}

@property (retain) NSError *error;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain) id<QLThumbnailGenerationRequest, NSXPCProxyCreating> thumbnailRequest;
@property (retain) NSURL *documentURL;
@property (retain) NSURL *destinationURL;
@property BOOL allowsThumbnailGeneration;
@property BOOL generateThumbnailsAtBackgroundPriority;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated;
@property (readonly) GSAddition *genStoreAddition;
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated;
@property (readonly) QLThumbnailAddition *addition;

+ (BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)a0;

- (id)init;
- (void)main;
- (void)start;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isConcurrent;
- (void)_finishWithError:(id)a0;
- (BOOL)_finishIfNeeded;
- (void)_afterDeterminingWhetherWeCanGenerate:(BOOL)a0;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)a0;
- (void)_generateThumbnail;
- (void)afterThumbnailIsPutInGenstore;
- (id)initWithDocumentAtURL:(id)a0;

@end
