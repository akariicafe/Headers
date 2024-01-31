@class ICQOpportunitySheetDetailsSpecification, NSString, ICQOpportunityBubbleDetailsSpecification, _ICQOpportunityBubbleReportingSpecification;

@interface ICQOpportunityBubbleSpecification : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) ICQOpportunityBubbleDetailsSpecification *bubbleDetails;
@property (retain, nonatomic) ICQOpportunitySheetDetailsSpecification *sheetDetails;
@property (retain, nonatomic) _ICQOpportunityBubbleReportingSpecification *reportingDetails;

- (id)serverUIURL;
- (void).cxx_destruct;
- (id)initWithOpportunityBubble:(id)a0 andOpportunitySheet:(id)a1;

@end
