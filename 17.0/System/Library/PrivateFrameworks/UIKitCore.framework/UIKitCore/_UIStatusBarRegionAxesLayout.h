@class NSArray, _UIStatusBarRegion, NSString;
@protocol _UIStatusBarRegionAxisLayout;

@interface _UIStatusBarRegionAxesLayout : NSObject <_UIStatusBarRegionLayout>

@property (copy, nonatomic) NSArray *horizontalConstraints;
@property (copy, nonatomic) NSArray *verticalConstraints;
@property (copy, nonatomic) NSArray *layoutGuides;
@property (retain, nonatomic) id<_UIStatusBarRegionAxisLayout> horizontalLayout;
@property (retain, nonatomic) id<_UIStatusBarRegionAxisLayout> verticalLayout;
@property (weak, nonatomic) _UIStatusBarRegion *region;
@property (copy, nonatomic) NSArray *displayItems;
@property (readonly, nonatomic) BOOL fitsAllItems;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
