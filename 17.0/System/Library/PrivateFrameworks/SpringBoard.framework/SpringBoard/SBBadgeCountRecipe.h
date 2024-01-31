@class NSString;

@interface SBBadgeCountRecipe : NSObject <SBTestRecipe> {
    unsigned long long _badgeCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
