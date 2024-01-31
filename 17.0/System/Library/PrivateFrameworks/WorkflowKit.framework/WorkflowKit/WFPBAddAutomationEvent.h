@class NSString;

@interface WFPBAddAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char actionCount : 1; unsigned char requiresRuntimeConfirmation : 1; unsigned char showsNotification : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasTriggerType;
@property (retain, nonatomic) NSString *triggerType;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (retain, nonatomic) NSString *intentType;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasActionCount;
@property (nonatomic) unsigned int actionCount;
@property (readonly, nonatomic) BOOL hasShortcutIdentifier;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier;
@property (nonatomic) BOOL hasShowsNotification;
@property (nonatomic) BOOL showsNotification;
@property (nonatomic) BOOL hasRequiresRuntimeConfirmation;
@property (nonatomic) BOOL requiresRuntimeConfirmation;

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
