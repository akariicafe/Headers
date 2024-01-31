@class NSString, NSArray, WFPhotoAccessResource;

@interface WFPhotoAlbumPickerParameter : WFEnumerationParameter <PHPhotoLibraryChangeObserver> {
    NSArray *_possibleStates;
    id _defaultSerializedRepresentation;
}

@property (retain, nonatomic) WFPhotoAccessResource *photoAccessResource;
@property (readonly, nonatomic) BOOL includesSmartAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referencedActionResourceClasses;
+ (BOOL)hasPhotosAccess;

- (id)possibleStates;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)sharedLibrary;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)setActionResources:(id)a0;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)resourceAvailabilityChanged;

@end
