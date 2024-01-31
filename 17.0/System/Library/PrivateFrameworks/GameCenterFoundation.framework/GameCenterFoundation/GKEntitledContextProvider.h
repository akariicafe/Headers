@interface GKEntitledContextProvider : NSObject

+ (BOOL)isEntitledToUseGroupActivities;
+ (id)getCurrentDeviceName;
+ (BOOL)hasAnyGameCenterEntitlement;
+ (BOOL)hasBooleanPublicGameCenterEntitlement;

- (id)init;

@end
