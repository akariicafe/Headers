@class NSDate;

@interface _PXForYouSampleHorizontalCollectionGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)init;

@end
