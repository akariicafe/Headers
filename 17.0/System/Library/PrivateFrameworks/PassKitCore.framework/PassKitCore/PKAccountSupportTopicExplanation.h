@class NSString, PKAccountSupportTopicExplanationContent, PKAccountSupportTopicExplanationLink;

@interface PKAccountSupportTopicExplanation : NSObject

@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSString *headerSubtitle;
@property (readonly, copy, nonatomic) NSString *primaryActionTitle;
@property (readonly, copy, nonatomic) NSString *secondaryActionTitle;
@property (readonly, nonatomic) PKAccountSupportTopicExplanationContent *content;
@property (readonly, nonatomic) PKAccountSupportTopicExplanationLink *link;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
