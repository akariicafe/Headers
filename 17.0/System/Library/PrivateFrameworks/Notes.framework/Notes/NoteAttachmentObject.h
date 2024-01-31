@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NoteObject *note;

+ (BOOL)applyFileAttributesForAttachment:(id)a0 error:(id *)a1;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)a0 error:(id *)a1;
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)a0 error:(id *)a1;
+ (BOOL)migrateAttachmentRelatedFilesInContext:(id)a0 error:(id *)a1;
+ (BOOL)migrateFileForAttachment:(id)a0 toCurrentAttachmentPathWithError:(id *)a1;

- (void)prepareForDeletion;
- (id)attachmentDataFileURLWithError:(id *)a0;
- (BOOL)persistAttachmentData:(id)a0 error:(id *)a1;
- (id)attachmentDataWithError:(id *)a0;

@end
