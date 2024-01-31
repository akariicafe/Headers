@class HKAttachmentStore, NSString, UTType, NSURL, NSDictionary;

@interface HKAttachmentBuilder : NSObject {
    HKAttachmentStore *_attachmentStore;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) UTType *contentType;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *objectIdentifier;
@property (copy, nonatomic) NSString *schemaIdentifier;
@property (copy, nonatomic) NSDictionary *attachmentMetadata;
@property (copy, nonatomic) NSDictionary *referenceMetadata;

- (void)finishWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAttachmentStore:(id)a0;

@end
