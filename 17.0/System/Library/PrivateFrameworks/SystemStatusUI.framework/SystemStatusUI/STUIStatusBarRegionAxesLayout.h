@class NSArray, STUIStatusBarRegion, NSString;
@protocol STUIStatusBarRegionAxisLayout;

@interface STUIStatusBarRegionAxesLayout : NSObject <STUIStatusBarRegionLayout>

@property (copy, nonatomic) NSArray *horizontalConstraints;
@property (copy, nonatomic) NSArray *verticalConstraints;
@property (copy, nonatomic) NSArray *layoutGuides;
@property (retain, nonatomic) id<STUIStatusBarRegionAxisLayout> horizontalLayout;
@property (retain, nonatomic) id<STUIStatusBarRegionAxisLayout> verticalLayout;
@property (weak, nonatomic) STUIStatusBarRegion *region;
@property (copy, nonatomic) NSArray *displayItems;
@property (readonly, nonatomic) BOOL fitsAllItems;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
