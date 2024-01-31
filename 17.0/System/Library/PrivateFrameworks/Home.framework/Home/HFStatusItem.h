@class HMRoom, HFStatusItemUpdate, NSDate, HMHome;
@protocol HFCharacteristicValueSource;

@interface HFStatusItem : HFItem <NSCopying>

@property (retain, nonatomic) NSDate *invalidationDate;
@property (nonatomic) BOOL needsInvalidation;
@property (retain, nonatomic) HFStatusItemUpdate *statusItemUpdate;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) BOOL supportsInvalidation;

+ (id)_associatedServiceTypeToServiceTypeMap;
+ (id)_criticalServiceTypes;
+ (id)_serviceTypeToAssociatedServiceTypesMap;
+ (id)characteristicTypesForServiceType:(id)a0 includingAssociatedTypes:(BOOL)a1;

- (id)init;
- (void)scheduleInvalidation;
- (BOOL)isTransitioning;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canScheduleInvalidation;
- (id)displayNameForHomeKitObject:(id)a0;
- (id)initWithHome:(id)a0 room:(id)a1;
- (BOOL)isInvalidationPending;
- (id)itemUpdateFromLatestResults;
- (id)_filteredServicesOfTypes:(id)a0 containingCharacteristicTypes:(id)a1;
- (BOOL)_shouldForceVisibleForService:(id)a0;
- (void)_updateInvalidationDate;
- (BOOL)canRepresentAbnormalAndNormalHomeKitObjectsTogether;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)a0;
- (id)filteredServices;
- (id)filteredServicesOfTypes:(id)a0;
- (id)filteredServicesOfTypes:(id)a0 containingCharacteristicTypes:(id)a1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)a0;
- (id)initWithHome:(id)a0 room:(id)a1 valueSource:(id)a2;
- (double)invalidationTimeout;
- (id)shortTitleForFormat:(id)a0;
- (id)standardResultsForBatchReadResponse:(id)a0 serviceTypes:(id)a1;

@end
