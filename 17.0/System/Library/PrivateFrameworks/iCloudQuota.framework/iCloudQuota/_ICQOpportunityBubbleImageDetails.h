@class NSString;

@interface _ICQOpportunityBubbleImageDetails : NSObject

@property (copy, nonatomic) NSString *urlFor3x;
@property (copy, nonatomic) NSString *urlFor2x;
@property (copy, nonatomic) NSString *urlFor1x;

- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (id)getURLForScale:(long long)a0;

@end
