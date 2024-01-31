@class NSString, _PHPickerSuggestionGroup, _PHPickerCollectionConfiguration, PHPhotoLibrary, NSArray, PHPickerFilter;

@interface PHPickerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _onboardingOverlayDismissedBefore;
@property (nonatomic) BOOL _onboardingHeaderDismissedBefore;
@property (nonatomic) BOOL _limitedLibraryHeaderDismissedBefore;
@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers;
@property (readonly, nonatomic) BOOL _usesOpenPanelLayout;
@property (nonatomic, setter=_setUsesMemoriesLayout:) BOOL _usesMemoriesLayout;
@property (copy, nonatomic, setter=_setPurposedLimitedLibraryApplicationIdentifier:) NSString *_purposedLimitedLibraryApplicationIdentifier;
@property (nonatomic, setter=_setEdgesWithoutContentMargins:) unsigned long long _edgesWithoutContentMargins;
@property (nonatomic, setter=_setDisabledFeatures:) unsigned long long _disabledFeatures;
@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy, nonatomic) _PHPickerSuggestionGroup *_suggestionGroup;
@property (nonatomic, setter=_setDisabledPrivateCapabilities:) unsigned long long _disabledPrivateCapabilities;
@property (nonatomic, setter=_setSourceType:) long long _sourceType;
@property (copy, nonatomic) NSString *_containerIdentifier;
@property (nonatomic, setter=_setAlwaysShowLoadingPlaceholder:) BOOL _alwaysShowLoadingPlaceholder;
@property (nonatomic, setter=_setAllowsDownscaling:) BOOL _allowsDownscaling;
@property (nonatomic, setter=_setAllowsEncodingPolicyModification:) BOOL _allowsEncodingPolicyModification;
@property (copy, nonatomic, setter=_setAlbumsConfiguration:) _PHPickerCollectionConfiguration *_albumsConfiguration;
@property (copy, nonatomic, setter=_setPeopleConfiguration:) _PHPickerCollectionConfiguration *_peopleConfiguration;
@property (copy, nonatomic, setter=_setFollowupPeopleConfigurations:) NSArray *_followupPeopleConfigurations;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic) long long selection;
@property (nonatomic) long long selectionLimit;
@property (copy, nonatomic) PHPickerFilter *filter;
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;
@property (nonatomic) unsigned long long disabledCapabilities;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)a0;
- (id)_initWithPhotoLibrary:(id)a0 onlyReturnsIdentifiers:(BOOL)a1;
- (id)initWithPhotoLibraryAndOnlyForOpenPanel:(id)a0;

@end
