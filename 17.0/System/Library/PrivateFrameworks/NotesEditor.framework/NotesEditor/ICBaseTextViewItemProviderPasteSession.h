@class NSManagedObjectID, NSSet, ICNote, NSMutableSet, NSManagedObjectContext;

@interface ICBaseTextViewItemProviderPasteSession : ICBaseTextViewPasteSession

@property (retain, nonatomic) NSManagedObjectID *noteObjectID;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (readonly, nonatomic) ICNote *workerNote;
@property (retain, nonatomic) NSMutableSet *mutableErrorCodes;
@property (nonatomic) unsigned long long numberOfAttachmentsAttemptedAdded;
@property (nonatomic) BOOL isForDragAndDrop;
@property (nonatomic) BOOL shouldFilterAttributedString;
@property (nonatomic) BOOL supportsAttachments;
@property (readonly, nonatomic) NSSet *errorCodes;
@property (nonatomic) unsigned long long numberOfAttachmentImagesPreloaded;
@property (nonatomic) unsigned long long numberOfTrailingNewlinesStripped;

- (void)performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addErrorWithCode:(long long)a0;
- (void)incrementNumberOfAttachmentsAttemptedAdded;
- (id)initWithNoteObjectID:(id)a0;
- (void)saveWorkerContext;
- (id)workerNote;

@end
