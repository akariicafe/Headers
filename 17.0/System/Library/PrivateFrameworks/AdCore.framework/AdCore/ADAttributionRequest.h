@class NSData, NSString;

@interface ADAttributionRequest : PBRequest <NSCopying> {
    struct { unsigned char downloadClickTimestamp : 1; unsigned char iAdConversionTimestamp : 1; unsigned char iAdImpressionTimestamp : 1; unsigned char purchaseTimestamp : 1; unsigned char searchAdClickTimestamp : 1; unsigned char downloadType : 1; unsigned char runState : 1; unsigned char attributedByiTunes : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (readonly, nonatomic) BOOL hasTiltID;
@property (retain, nonatomic) NSData *tiltID;
@property (readonly, nonatomic) BOOL hasAnonymousDemandiAdID;
@property (retain, nonatomic) NSData *anonymousDemandiAdID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasPurchaseTimestamp;
@property (nonatomic) double purchaseTimestamp;
@property (nonatomic) BOOL hasIAdConversionTimestamp;
@property (nonatomic) double iAdConversionTimestamp;
@property (nonatomic) BOOL hasIAdImpressionTimestamp;
@property (nonatomic) double iAdImpressionTimestamp;
@property (nonatomic) BOOL hasAttributedByiTunes;
@property (nonatomic) BOOL attributedByiTunes;
@property (nonatomic) BOOL hasRunState;
@property (nonatomic) int runState;
@property (readonly, nonatomic) BOOL hasToroID;
@property (retain, nonatomic) NSData *toroID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (retain, nonatomic) NSData *dPID;
@property (nonatomic) BOOL hasSearchAdClickTimestamp;
@property (nonatomic) double searchAdClickTimestamp;
@property (readonly, nonatomic) BOOL hasAdMetadata;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) BOOL hasDownloadClickTimestamp;
@property (nonatomic) double downloadClickTimestamp;
@property (nonatomic) BOOL hasDownloadType;
@property (nonatomic) int downloadType;

+ (id)options;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)runStateAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsRunState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDownloadType:(id)a0;
- (id)downloadTypeAsString:(int)a0;

@end
