@class NSString, NSURL;

@interface PKAccountSupportTopicExplanationLink : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSURL *url;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
