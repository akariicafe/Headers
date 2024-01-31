@class NSDictionary;

@interface ICQOpportunitySheetDetailsSpecification : ICQOpportunityFlowSpecification

@property (retain, nonatomic) NSDictionary *messagesInfo;

- (void).cxx_destruct;
- (id)messageForKey:(id)a0;
- (void)makeMessageFromServerDict:(id)a0;

@end
