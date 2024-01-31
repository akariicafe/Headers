@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1;

@end
