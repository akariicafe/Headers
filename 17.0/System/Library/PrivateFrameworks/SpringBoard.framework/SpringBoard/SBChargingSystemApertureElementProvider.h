@class NSString;

@interface SBChargingSystemApertureElementProvider : NSObject <SAElementIdentifying>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)powerElementWithBatteryCapacity:(double)a0;

@end
