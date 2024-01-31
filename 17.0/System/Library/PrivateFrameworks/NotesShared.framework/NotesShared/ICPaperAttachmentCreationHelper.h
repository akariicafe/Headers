@class NSURL, ICAttachment, NSError;

@interface ICPaperAttachmentCreationHelper : NSObject

+ (BOOL)createPaperDocumentForAttachment:(id)a0 fromLegacyMediaAtURL:(id)a1 error:(id *)a2;
+ (void)copyNewPaperBundleToAttachment:(ICAttachment *)a0 fromURL:(NSURL *)a1 completionHandler:(void (^)(NSError *))a2;
+ (void)createPaperDocumentForAttachment:(ICAttachment *)a0 fromLegacyMediaAtURL:(NSURL *)a1 completionHandler:(void (^)(NSError *))a2;

- (id)init;

@end
