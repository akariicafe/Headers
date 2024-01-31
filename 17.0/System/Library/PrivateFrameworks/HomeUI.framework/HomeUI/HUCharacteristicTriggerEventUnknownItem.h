@class NSSet, NSString;

@interface HUCharacteristicTriggerEventUnknownItem : HFItem <HFServiceVendor>

@property (readonly, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessories;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
