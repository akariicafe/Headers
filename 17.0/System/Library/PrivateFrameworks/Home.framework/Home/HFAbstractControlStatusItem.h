@class NSSet;

@interface HFAbstractControlStatusItem : HFStatusItem <HFServiceLikeStatusItem>

@property (class, readonly, nonatomic) NSSet *serviceTypes;

+ (BOOL)_isControlItem:(id)a0 identicalToControlItem:(id)a1;
+ (BOOL)_isControlItem:(id)a0 similarToControlItem:(id)a1;

- (BOOL)supportsInvalidation;
- (id)_aggregatedValueSourceWithServiceItems:(id)a0;
- (id)_buildControlItemsForServices:(id)a0;
- (id)_buildServiceItemsForServices:(id)a0;
- (id)_primaryServiceDescriptorForServices:(id)a0;
- (id)standardResultsForBatchReadResponse:(id)a0 serviceTypes:(id)a1;

@end
