@class NSString;

@interface WebAVMediaSelectionOption : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _localizedDisplayName;
}

@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *mediaType;

- (BOOL)isPlayable;
- (id)propertyList;
- (id)languageCode;
- (id)availableMetadataFormats;
- (id).cxx_construct;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (id)locale;
- (id)metadataForFormat:(id)a0;
- (void).cxx_destruct;
- (id)outOfBandSource;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)a0;
- (id)displayNameWithLocale:(id)a0;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (id)mediaCharacteristics;
- (id)mediaSubTypes;
- (id)outOfBandIdentifier;
- (id)track;
- (id)initWithMediaType:(id)a0 displayName:(id)a1;

@end
