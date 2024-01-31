@class NSMutableSet;

@interface SGSMMutableSearchState : NSObject {
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (id)init;
- (void)commit;
- (void)setJustEngaged;
- (void)resetConversionCounts;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsNonOpportunity;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isFirstTimeSeeingResult:(id)a0;
- (void)resetJustEngaged;
- (void)scoreAsOtherConversion;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)resetCounts;
- (BOOL)justEngaged;

@end
