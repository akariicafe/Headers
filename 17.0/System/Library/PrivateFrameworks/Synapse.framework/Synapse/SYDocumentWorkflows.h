@interface SYDocumentWorkflows : NSObject

+ (BOOL)isSupportedContentType:(id)a0;
+ (BOOL)isSupportedContentTypeTree:(id)a0;
+ (id)localizedStringRemove;
+ (id)localizedStringReply:(id)a0;
+ (id)localizedStringShowInAppWithBundleIdentifier:(id)a0 error:(id *)a1;
+ (id)localizedStringShowInMail;
+ (id)replyToSenderLocalizedString:(id)a0;

@end
