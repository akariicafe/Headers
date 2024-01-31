@class NSString, ICAttachment, NSManagedObjectContext;

@interface ICGalleryAttachmentViewSubAttachmentItem : NSObject

@property (copy, nonatomic) NSString *attachmentIdentifier;
@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSManagedObjectContext *context;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)updateSize;
- (id)initWithAttachmentIdentifier:(id)a0 context:(id)a1;
- (void)invalidateSize;

@end
