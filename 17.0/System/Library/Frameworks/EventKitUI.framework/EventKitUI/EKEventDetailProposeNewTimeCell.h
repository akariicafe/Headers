@interface EKEventDetailProposeNewTimeCell : EKEventDetailCell

- (BOOL)update;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (BOOL)shouldDisplayForEvent;

@end
