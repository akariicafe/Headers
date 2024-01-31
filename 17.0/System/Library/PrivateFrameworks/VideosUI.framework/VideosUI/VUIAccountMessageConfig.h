@class NSDictionary;

@interface VUIAccountMessageConfig : NSObject

@property (retain, nonatomic) NSDictionary *visibilityBehaviours;
@property (nonatomic) long long fallbackVisibilityType;
@property (nonatomic) BOOL alwaysForceOpenSidebarAnimated;
@property (nonatomic) BOOL alwaysForceOpenSidebarNonAnimated;

- (id)init;
- (void).cxx_destruct;
- (id)_createVisibilityDictionary;
- (long long)_getFallbackVisibilityType;

@end
