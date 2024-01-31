@class NSArray, NSData, NSString;

@interface _SFPBGradientColor : PBCodable <_SFPBGradientColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *colors;
@property (nonatomic) int gradientType;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addColors:(id)a0;
- (void)clearColors;
- (id)colorsAtIndex:(unsigned long long)a0;
- (unsigned long long)colorsCount;

@end
