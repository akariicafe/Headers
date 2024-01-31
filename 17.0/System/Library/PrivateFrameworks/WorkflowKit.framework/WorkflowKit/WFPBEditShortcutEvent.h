@class NSString;

@interface WFPBEditShortcutEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char numberOfEngagedSuggestions : 1; unsigned char numberOfManuallyAddedActions : 1; unsigned char numberOfRejectedSuggestions : 1; unsigned char numberOfShownSuggestions : 1; unsigned char startingActionCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (nonatomic) BOOL hasNumberOfShownSuggestions;
@property (nonatomic) unsigned int numberOfShownSuggestions;
@property (nonatomic) BOOL hasNumberOfEngagedSuggestions;
@property (nonatomic) unsigned int numberOfEngagedSuggestions;
@property (nonatomic) BOOL hasNumberOfRejectedSuggestions;
@property (nonatomic) unsigned int numberOfRejectedSuggestions;
@property (nonatomic) BOOL hasNumberOfManuallyAddedActions;
@property (nonatomic) unsigned int numberOfManuallyAddedActions;
@property (nonatomic) BOOL hasStartingActionCount;
@property (nonatomic) unsigned int startingActionCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
