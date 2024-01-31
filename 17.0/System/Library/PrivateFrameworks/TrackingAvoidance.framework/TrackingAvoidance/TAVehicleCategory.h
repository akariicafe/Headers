@class NSDate;

@interface TAVehicleCategory : NSObject

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long vehicleCategoryType;

+ (unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)a0;
+ (unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)a0;

- (void).cxx_destruct;
- (id)initWithTAGeoNavigationNotification:(id)a0;
- (id)initWithTAVehicularStateNotification:(id)a0;
- (id)initWithVehicleCategoryType:(unsigned long long)a0 andDate:(id)a1;

@end
