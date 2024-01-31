@class NSString, NSArray;

@interface GEOResultRefinementSection : NSObject

@property (copy, nonatomic) NSString *sectionHeader;
@property (copy, nonatomic) NSArray *resultRefinements;
@property (nonatomic) long long refinementsType;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementSection;
- (id)initWithResultRefinementSection:(id)a0;
- (id)initWithSectionHeader:(id)a0 resultRefinements:(id)a1;

@end
