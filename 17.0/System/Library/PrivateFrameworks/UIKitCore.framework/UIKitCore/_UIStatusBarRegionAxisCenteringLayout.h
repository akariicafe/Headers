@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout>

@property (nonatomic) double interspace;
@property (nonatomic) double margin;
@property (nonatomic) long long maxNumberOfItems;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)constraintsForDisplayItems:(id)a0 layoutGuides:(id)a1 inContainerItem:(id)a2 axis:(long long)a3;
- (BOOL)mayFitDisplayItems:(id)a0 inContainerItem:(id)a1 axis:(long long)a2;

@end
