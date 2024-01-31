@class NSString, NSURL;

@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
    NSURL *_pageTemplateURL;
    NSString *_userURL;
    NSString *_formActionURL;
    NSString *_unblockStyle;
    NSString *_remediationButtonText;
}

- (id)init;
- (void).cxx_destruct;

@end
