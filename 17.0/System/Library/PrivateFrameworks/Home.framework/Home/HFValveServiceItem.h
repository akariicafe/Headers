@interface HFValveServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (BOOL)containsActions;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)createControlItemsWithOptions:(id)a0;

@end
