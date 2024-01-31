@class NSString;

@interface WFPBSetupAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char requiredRuntimeConfirmation : 1; unsigned char showsNotification : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (nonatomic) BOOL hasRequiredRuntimeConfirmation;
@property (nonatomic) BOOL requiredRuntimeConfirmation;
@property (nonatomic) BOOL hasShowsNotification;
@property (nonatomic) BOOL showsNotification;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

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
