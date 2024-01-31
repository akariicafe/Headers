@class NSDictionary, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceSuggestionGenerator : NSObject <ATXSuggestedSpacesEnvironment>

@property (readonly, nonatomic) NSDictionary *appLaunchCounts;
@property (readonly, nonatomic) NSSet *suggestedApps;
@property (readonly, nonatomic) ATXSuggestedPagesTunableConstants *tunableConstants;

- (id)init;
- (id)_facesForModeType:(long long)a0 modeUUID:(id)a1 allDescriptors:(id)a2;
- (id)_firstPhotosDescriptorMatchingSubtype:(long long)a0 allDescriptors:(id)a1;
- (void)generateAndCacheFacesFromDescriptors:(id)a0;
- (id)facesForMode:(id)a0 allDescriptors:(id)a1;
- (id)_posterCandidatesForModeType:(long long)a0 allDescriptors:(id)a1;
- (id)generateFacesFromDescriptors:(id)a0;
- (id)_firstDescriptorWithExtension:(id)a0 identifier:(id)a1 allDescriptors:(id)a2;
- (void).cxx_destruct;
- (id)_firstDescriptorWithExtension:(id)a0 focus:(long long)a1 allDescriptors:(id)a2;

@end
