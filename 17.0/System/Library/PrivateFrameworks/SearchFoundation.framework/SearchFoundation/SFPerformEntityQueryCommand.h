@class SFTopic, NSString, SFSymbolImage, SFColor, SFDrillDownMetadata, NSDictionary, NSData;

@interface SFPerformEntityQueryCommand : SFCommand <SFPerformEntityQueryCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *tokenString;
@property (retain, nonatomic) SFSymbolImage *symbolImage;
@property (nonatomic) int entityType;
@property (copy, nonatomic) NSString *entityIdentifier;
@property (retain, nonatomic) SFColor *entityBackgroundColor;
@property (retain, nonatomic) SFDrillDownMetadata *metadata;
@property (retain, nonatomic) SFDrillDownMetadata *drilldownMetadata;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasEntityType;

@end
