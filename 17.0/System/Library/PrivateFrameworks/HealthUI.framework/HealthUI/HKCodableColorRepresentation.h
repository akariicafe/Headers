@class NSString;

@interface HKCodableColorRepresentation : PBCodable <NSCopying> {
    struct APPLE_HKCodableColorRepresentation_1 { unsigned char displayCategoryIdentifier : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (retain, nonatomic) NSString *objectTypeIdentifier;
@property (nonatomic) BOOL hasDisplayCategoryIdentifier;
@property (nonatomic) long long displayCategoryIdentifier;
@property (readonly, nonatomic) BOOL hasSemanticColorName;
@property (retain, nonatomic) NSString *semanticColorName;

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
