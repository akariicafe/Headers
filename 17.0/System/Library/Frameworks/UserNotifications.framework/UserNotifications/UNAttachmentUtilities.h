@interface UNAttachmentUtilities : NSObject

+ (void)_deleteFile:(id)a0;
+ (void)_processAttachment:(id)a0;
+ (id)_systemDirectoryURL;
+ (void)deleteAttachmentFilesInContentsIfNecessary:(id)a0;
+ (void)deleteAttachmentFilesInRequestsIfNecessary:(id)a0;

@end
