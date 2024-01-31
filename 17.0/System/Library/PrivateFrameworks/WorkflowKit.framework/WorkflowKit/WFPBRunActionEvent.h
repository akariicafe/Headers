@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char didRunRemotely : 1; unsigned char isInvalidatedSystemAction : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (nonatomic) BOOL didRunRemotely;
@property (nonatomic) BOOL hasIsInvalidatedSystemAction;
@property (nonatomic) BOOL isInvalidatedSystemAction;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (retain, nonatomic) NSString *galleryIdentifier;

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
