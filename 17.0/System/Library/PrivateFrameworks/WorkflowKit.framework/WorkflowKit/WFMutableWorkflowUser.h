@class NSString, NSURL;

@interface WFMutableWorkflowUser : WFWorkflowUser

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *twitter;
@property (retain, nonatomic) NSURL *websiteURL;
@property (retain, nonatomic) NSURL *profileImageURL;
@property (nonatomic) long long mainIdentity;

- (void).cxx_destruct;

@end
