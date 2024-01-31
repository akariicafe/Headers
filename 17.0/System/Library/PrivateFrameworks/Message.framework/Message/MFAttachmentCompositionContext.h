@class NSString, NSArray, NSURL, NSMutableDictionary, MFAttachmentManager;

@interface MFAttachmentCompositionContext : NSObject {
    NSMutableDictionary *_hostIdentifierToAttachmentContentIDMap;
}

@property (readonly, nonatomic) NSString *contextID;
@property (retain, nonatomic) NSURL *attachmentsBaseURL;
@property (retain, nonatomic) MFAttachmentManager *attachmentsManager;
@property (readonly, nonatomic) NSArray *attachments;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContextID:(id)a0;
- (id)attachmentForHostIdentifier:(id)a0;
- (void)setHostIdentifier:(id)a0 forAttachment:(id)a1;

@end
