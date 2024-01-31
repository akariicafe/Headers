@class NSSet, NSString;
@protocol STUIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate;

@interface STUIStatusBarRegionAxisSquishyLayout : NSObject <STUIStatusBarRegionAxisLayout>

@property (nonatomic) long long alignment;
@property (nonatomic) BOOL compressItems;
@property (nonatomic) double interspace;
@property (nonatomic) long long maxNumberOfItems;
@property (nonatomic) long long maxNumberOfVisibleItems;
@property (retain, nonatomic) NSSet *dynamicallyHiddenIdentifiers;
@property (nonatomic) double itemDynamicScale;
@property (nonatomic) double minItemDynamicScale;
@property (nonatomic) double minInterspaceDynamicScale;
@property (weak, nonatomic) id<STUIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> dynamicHidingDelegate;
@property (readonly, nonatomic) BOOL canOverflowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
