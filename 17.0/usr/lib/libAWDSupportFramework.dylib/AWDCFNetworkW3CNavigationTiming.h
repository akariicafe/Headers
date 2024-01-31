@class NSString;

@interface AWDCFNetworkW3CNavigationTiming : PBCodable <NSCopying> {
    struct { unsigned char connectEnd : 1; unsigned char connectStart : 1; unsigned char domainLookupEnd : 1; unsigned char domainLookupStart : 1; unsigned char fetchStart : 1; unsigned char isCellular : 1; unsigned char isReused : 1; unsigned char redirectCount : 1; unsigned char redirectCountW3C : 1; unsigned char redirectEnd : 1; unsigned char redirectStart : 1; unsigned char requestStart : 1; unsigned char responseEnd : 1; unsigned char responseStart : 1; unsigned char secureConnectionStart : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRedirectStart;
@property (nonatomic) unsigned long long redirectStart;
@property (nonatomic) BOOL hasRedirectEnd;
@property (nonatomic) unsigned long long redirectEnd;
@property (nonatomic) BOOL hasFetchStart;
@property (nonatomic) unsigned long long fetchStart;
@property (nonatomic) BOOL hasDomainLookupStart;
@property (nonatomic) unsigned long long domainLookupStart;
@property (nonatomic) BOOL hasDomainLookupEnd;
@property (nonatomic) unsigned long long domainLookupEnd;
@property (nonatomic) BOOL hasConnectStart;
@property (nonatomic) unsigned long long connectStart;
@property (nonatomic) BOOL hasSecureConnectionStart;
@property (nonatomic) unsigned long long secureConnectionStart;
@property (nonatomic) BOOL hasConnectEnd;
@property (nonatomic) unsigned long long connectEnd;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) unsigned long long requestStart;
@property (nonatomic) BOOL hasResponseStart;
@property (nonatomic) unsigned long long responseStart;
@property (nonatomic) BOOL hasResponseEnd;
@property (nonatomic) unsigned long long responseEnd;
@property (nonatomic) BOOL hasRedirectCountW3C;
@property (nonatomic) long long redirectCountW3C;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) long long redirectCount;
@property (nonatomic) BOOL hasIsReused;
@property (nonatomic) long long isReused;
@property (readonly, nonatomic) BOOL hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasIsCellular;
@property (nonatomic) long long isCellular;
@property (readonly, nonatomic) BOOL hasProcname;
@property (retain, nonatomic) NSString *procname;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
