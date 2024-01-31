@interface NAUAnalyticsEnvelopeTracker : NSObject

+ (void)registerEnvelopeCreationAnticipatedForContentType:(int)a0;
+ (void)registerEnvelopesAsCreated:(id)a0;
+ (void)registerEnvelopesAsSubmittedToUploader:(id)a0;
+ (id)_contentTypeProperty;
+ (id)_daysSinceSubmissionDateProperty;
+ (void)_registerContentTypes:(id)a0 withEventName:(id)a1;
+ (void)_registerEnvelopes:(id)a0 withEventName:(id)a1;
+ (void)registerEnvelopeContentTypesAsDropped:(id)a0 forReason:(unsigned long long)a1 withError:(id)a2;
+ (void)registerEnvelopeContentTypesAsPreparedForUpload:(id)a0;
+ (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)a0;
+ (void)registerEnvelopeContentTypesAsUploaded:(id)a0;
+ (void)registerEnvelopesAsReceivedByUploader:(id)a0;

@end
