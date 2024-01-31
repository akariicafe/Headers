@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CKReviewLargeAttachmentsViewController : CKAbstractReviewViewController <QLPreviewControllerDelegate>

@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)previewControllerDidDismiss:(id)a0;
- (id)init;
- (id)navigationBarTitle;
- (void).cxx_destruct;
- (Class)tableViewCellClass;
- (id)attachmentClass;
- (void)reloadModelData;
- (void)_populateAttachmentData;
- (id)_previewItem;
- (void)deleteModelObjectAndUnderlyingData:(id)a0;
- (void)didSelectModelObjectAtIndex:(unsigned long long)a0;
- (id)modelObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfModelObjects;
- (id)tableViewCellReuseIdentifier;

@end
