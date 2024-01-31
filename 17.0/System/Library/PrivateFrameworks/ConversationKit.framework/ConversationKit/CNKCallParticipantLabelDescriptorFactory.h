@interface CNKCallParticipantLabelDescriptorFactory : NSObject

@property (nonatomic, copy) id /* block */ organizationNameProvider;

- (id)init;
- (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 alertAvailable:(BOOL)a2 allowsDuration:(BOOL)a3;
- (id)labelDescriptorWithStringsForCall:(id)a0 callCount:(long long)a1 callCenter:(id)a2 alertAvailable:(BOOL)a3 allowsDuration:(BOOL)a4;
- (id)makeLabel;
- (id)makeLabelWithString:(id)a0;

@end
