@class NSArray;

@interface HUCCMosaicArranger : NSObject

@property (retain, nonatomic) NSArray *layouts;
@property (nonatomic) unsigned long long numberOfItemsNeeded;
@property (nonatomic) unsigned long long chosenLayoutType;

- (void).cxx_destruct;
- (void)_configureForLandscapeGrid;
- (void)_configureForPortraitGrid;
- (id)calculateOrderingForItems:(id)a0;
- (id)initWithCCMosaicType:(unsigned long long)a0;

@end
