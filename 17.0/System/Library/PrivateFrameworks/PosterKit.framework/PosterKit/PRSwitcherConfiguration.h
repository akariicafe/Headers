@class PRPosterCollection, NSArray, NSSet, NSMapTable, PRPosterConfiguration;

@interface PRSwitcherConfiguration : NSObject <NSMutableCopying>

@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) PRPosterCollection *collection;
@property (retain, nonatomic) PRPosterConfiguration *selectedConfiguration;
@property (retain, nonatomic) PRPosterConfiguration *activeConfiguration;
@property (nonatomic) BOOL activeConfigurationDueToIncomingFocusModeChange;
@property (readonly, nonatomic) NSSet *heldAssociatedConfigurations;
@property (readonly, nonatomic) NSMapTable *associatedHomeScreenConfigurationsForServerIdentity;

- (id)primaryPosterIdentityForHomeScreenPosterConfiguration:(id)a0;
- (id)configuredPropertiesForPoster:(id)a0;
- (id)focusConfigurationForPoster:(id)a0;
- (id)_initWithCollection:(id)a0 activeConfiguration:(id)a1;
- (id)_childPosterConfigurationForConfigurationUUID:(id)a0;
- (id)_initWithConfigurations:(id)a0 selectedConfiguration:(id)a1 activeConfiguration:(id)a2 associatedHomeScreenConfigurations:(id)a3;
- (id)homeScreenPosterConfigurationForPosterConfiguration:(id)a0;
- (id)_childPosterConfigurationForConfiguration:(id)a0;
- (id)suggestionMetadataForPoster:(id)a0;
- (void).cxx_destruct;
- (id)lastModifiedDateForPoster:(id)a0;
- (id)metadataForPoster:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)homeConfigurationForPoster:(id)a0;
- (id)_posterConfigurationForUUID:(id)a0;

@end
