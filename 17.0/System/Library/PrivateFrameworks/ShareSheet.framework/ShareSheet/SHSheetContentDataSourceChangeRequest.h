@class NSArray, NSDictionary, SHSheetContentDataSourceState;

@interface SHSheetContentDataSourceChangeRequest : NSObject

@property (copy, nonatomic) NSArray *peopleProxies;
@property (copy, nonatomic) NSArray *shareProxies;
@property (copy, nonatomic) NSArray *actionProxies;
@property (copy, nonatomic) NSDictionary *activitiesByUUID;
@property (nonatomic) unsigned int nearbyCountSlotID;
@property (retain, nonatomic) SHSheetContentDataSourceState *state;
@property (nonatomic) long long excludeSectionTypes;
@property (nonatomic) BOOL forceReload;
@property (nonatomic) BOOL animated;

+ (id)changeRequestForPeopleProxies:(id)a0 shareProxies:(id)a1 actionProxies:(id)a2 nearbyCountSlotID:(unsigned int)a3 activitiesByUUID:(id)a4;
+ (id)changeRequestFromState:(id)a0;

- (void).cxx_destruct;

@end
