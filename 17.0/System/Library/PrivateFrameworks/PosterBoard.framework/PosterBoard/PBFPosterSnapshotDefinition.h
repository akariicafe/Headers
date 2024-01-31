@class NSString;

@interface PBFPosterSnapshotDefinition : PRPosterSnapshotDefinition {
    NSString *_persistenceIdentifier;
}

@property (readonly, nonatomic) double persistenceScale;
@property (readonly, nonatomic) BOOL shouldBePersistedOnlyTemporarily;

+ (id)defaultPreviewDefinitionForPreview:(id)a0;
+ (id)gallerySnapshotKeyFrameDefinition;
+ (id)defaultConfigurationDefinitions;
+ (id)defaultPreviewDefinitions;
+ (id)switcherFloatingLayerSnapshotDefinition;
+ (id)editingConfirmationDefinition;
+ (id)gallerySnapshotDefinition;
+ (id)gallerySnapshotWithComplicationsDefinition;
+ (id)switcherSnapshotDefinition;
+ (id)switcherUnlockedSnapshotDefinition;

- (id)_persistenceIdentitifer;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0;

@end
