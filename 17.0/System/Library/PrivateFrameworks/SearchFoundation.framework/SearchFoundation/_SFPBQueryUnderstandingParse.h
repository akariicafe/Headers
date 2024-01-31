@class NSData, NSString;

@interface _SFPBQueryUnderstandingParse : PBCodable <_SFPBQueryUnderstandingParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int queryIntentType;
@property (nonatomic) BOOL hasUnspecifiedTokens;
@property (nonatomic) BOOL hasSortCriteriaTokens;
@property (nonatomic) BOOL hasLocationTokens;
@property (nonatomic) BOOL hasActionTokens;
@property (nonatomic) BOOL hasMediaTypeTokens;
@property (nonatomic) BOOL hasVisualQualityTokens;
@property (nonatomic) BOOL hasNounTokens;
@property (nonatomic) BOOL hasTimeTokens;
@property (nonatomic) BOOL hasEventTokens;
@property (nonatomic) BOOL hasGenericLocationTokens;
@property (nonatomic) BOOL hasCaptureDeviceTokens;
@property (nonatomic) BOOL hasFavoritedTokens;
@property (nonatomic) BOOL hasSourceAppTokens;
@property (nonatomic) BOOL hasPersonTokens;
@property (nonatomic) BOOL hasPersonSenderTokens;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
