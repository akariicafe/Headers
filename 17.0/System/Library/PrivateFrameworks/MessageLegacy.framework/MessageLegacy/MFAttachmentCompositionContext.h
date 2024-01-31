@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject

@property (readonly, nonatomic) NSString *contextID;
@property (copy, nonatomic) NSURL *attachmentsBaseURL;
@property (readonly, nonatomic) NSArray *attachments;

- (id)init;
- (void)dealloc;
- (id)initWithContextID:(id)a0;

@end
