@interface AWDWPA2Counters : PBCodable <NSCopying> {
    struct { unsigned char ccmpfmterr : 1; unsigned char ccmpreplay : 1; unsigned char ccmpundec : 1; unsigned char decsuccess : 1; unsigned char fourwayfail : 1; unsigned char tkipcntrmsr : 1; unsigned char tkipicverr : 1; unsigned char tkipmicfaill : 1; unsigned char tkipreplay : 1; unsigned char wepexcluded : 1; unsigned char wepicverr : 1; unsigned char wepundec : 1; } _has;
}

@property (nonatomic) BOOL hasTkipmicfaill;
@property (nonatomic) unsigned long long tkipmicfaill;
@property (nonatomic) BOOL hasTkipcntrmsr;
@property (nonatomic) unsigned long long tkipcntrmsr;
@property (nonatomic) BOOL hasTkipreplay;
@property (nonatomic) unsigned long long tkipreplay;
@property (nonatomic) BOOL hasCcmpfmterr;
@property (nonatomic) unsigned long long ccmpfmterr;
@property (nonatomic) BOOL hasCcmpreplay;
@property (nonatomic) unsigned long long ccmpreplay;
@property (nonatomic) BOOL hasCcmpundec;
@property (nonatomic) unsigned long long ccmpundec;
@property (nonatomic) BOOL hasFourwayfail;
@property (nonatomic) unsigned long long fourwayfail;
@property (nonatomic) BOOL hasWepundec;
@property (nonatomic) unsigned long long wepundec;
@property (nonatomic) BOOL hasWepicverr;
@property (nonatomic) unsigned long long wepicverr;
@property (nonatomic) BOOL hasDecsuccess;
@property (nonatomic) unsigned long long decsuccess;
@property (nonatomic) BOOL hasTkipicverr;
@property (nonatomic) unsigned long long tkipicverr;
@property (nonatomic) BOOL hasWepexcluded;
@property (nonatomic) unsigned long long wepexcluded;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
