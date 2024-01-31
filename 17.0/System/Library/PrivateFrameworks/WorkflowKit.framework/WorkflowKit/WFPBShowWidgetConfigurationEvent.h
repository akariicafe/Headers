@class NSString;

@interface WFPBShowWidgetConfigurationEvent : PBCodable <NSCopying> {
    struct { unsigned char isInteractive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasIntentType;
@property (retain, nonatomic) NSString *intentType;
@property (readonly, nonatomic) BOOL hasSizeClass;
@property (retain, nonatomic) NSString *sizeClass;
@property (nonatomic) BOOL hasIsInteractive;
@property (nonatomic) BOOL isInteractive;

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
