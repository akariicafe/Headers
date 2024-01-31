@class NSDictionary, NSData, NSString;

@interface SFQueryUnderstandingParse : NSObject <SFQueryUnderstandingParse, NSSecureCoding, NSCopying> {
    struct { unsigned char queryIntentType : 1; unsigned char hasUnspecifiedTokens : 1; unsigned char hasSortCriteriaTokens : 1; unsigned char hasLocationTokens : 1; unsigned char hasActionTokens : 1; unsigned char hasMediaTypeTokens : 1; unsigned char hasVisualQualityTokens : 1; unsigned char hasNounTokens : 1; unsigned char hasTimeTokens : 1; unsigned char hasEventTokens : 1; unsigned char hasGenericLocationTokens : 1; unsigned char hasCaptureDeviceTokens : 1; unsigned char hasFavoritedTokens : 1; unsigned char hasSourceAppTokens : 1; unsigned char hasPersonTokens : 1; unsigned char hasPersonSenderTokens : 1; } _has;
}

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
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasHasActionTokens;
- (BOOL)hasHasCaptureDeviceTokens;
- (BOOL)hasHasEventTokens;
- (BOOL)hasHasFavoritedTokens;
- (BOOL)hasHasGenericLocationTokens;
- (BOOL)hasHasLocationTokens;
- (BOOL)hasHasMediaTypeTokens;
- (BOOL)hasHasNounTokens;
- (BOOL)hasHasPersonSenderTokens;
- (BOOL)hasHasPersonTokens;
- (BOOL)hasHasSortCriteriaTokens;
- (BOOL)hasHasSourceAppTokens;
- (BOOL)hasHasTimeTokens;
- (BOOL)hasHasUnspecifiedTokens;
- (BOOL)hasHasVisualQualityTokens;
- (BOOL)hasQueryIntentType;

@end
