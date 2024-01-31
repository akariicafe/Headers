@class NSArray, UIWindowScene;

@interface PRUISPosterAttachmentConfiguration : NSObject

@property (retain, nonatomic) UIWindowScene *attachmentHostWindowScene;
@property (copy, nonatomic) NSArray *attachments;

+ (id)attachmentConfigurationWithHostWindowScene:(id)a0 attachments:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
