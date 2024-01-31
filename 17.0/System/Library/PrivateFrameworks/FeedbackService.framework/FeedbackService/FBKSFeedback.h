@class NSString, FBKSFeedback_FrameworkPrivateName, NSDate;

@interface FBKSFeedback : NSObject

@property (retain, nonatomic) FBKSFeedback_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) NSString *formIdentifier;
@property (readonly, nonatomic) NSDate *submissionDate;
@property (readonly, nonatomic) NSString *build;
@property (nonatomic) long long ID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSwiftObject:(id)a0;

@end
