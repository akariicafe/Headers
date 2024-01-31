@class NSDictionary;

@interface SGMIBiomeSummaryResults : NSObject

@property (readonly, nonatomic) NSDictionary *biomeSummaryByMessage;
@property (readonly, nonatomic) NSDictionary *biomeMessageIdByPersistentId;

- (void).cxx_destruct;
- (id)initWithBiomeSummaryByMessage:(id)a0 biomeMessageIdByPersistentId:(id)a1;

@end
