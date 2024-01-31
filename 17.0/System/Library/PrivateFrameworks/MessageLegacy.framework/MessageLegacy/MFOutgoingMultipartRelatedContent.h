@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent

@property (retain, nonatomic) NSString *htmlBody;

- (void)dealloc;
- (id)copy;
- (id)multipartContent;

@end
