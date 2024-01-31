@class AWDWiFiNWActivityBtCoexReqestReason;

@interface AWDWiFiNWActivityBtCoex : PBCodable <NSCopying> {
    struct { unsigned char a2dpdeny : 1; unsigned char a2dpgrant : 1; unsigned char aptxafterpm : 1; unsigned char audiodeny : 1; unsigned char audiogrant : 1; unsigned char btabort : 1; unsigned char cts : 1; unsigned char duration : 1; unsigned char grant : 1; unsigned char pm : 1; unsigned char psnullretrycount : 1; unsigned char request : 1; unsigned char sniffdeny : 1; unsigned char sniffgrant : 1; unsigned char ucodehighlatency : 1; unsigned char wlanrxpreempt : 1; unsigned char wlantxpreempt : 1; } _has;
}

@property (nonatomic) BOOL hasRequest;
@property (nonatomic) unsigned int request;
@property (nonatomic) BOOL hasGrant;
@property (nonatomic) unsigned int grant;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasBtabort;
@property (nonatomic) unsigned int btabort;
@property (nonatomic) BOOL hasPsnullretrycount;
@property (nonatomic) unsigned int psnullretrycount;
@property (nonatomic) BOOL hasUcodehighlatency;
@property (nonatomic) unsigned int ucodehighlatency;
@property (nonatomic) BOOL hasCts;
@property (nonatomic) unsigned int cts;
@property (nonatomic) BOOL hasPm;
@property (nonatomic) unsigned int pm;
@property (nonatomic) BOOL hasWlantxpreempt;
@property (nonatomic) unsigned int wlantxpreempt;
@property (nonatomic) BOOL hasWlanrxpreempt;
@property (nonatomic) unsigned int wlanrxpreempt;
@property (nonatomic) BOOL hasAptxafterpm;
@property (nonatomic) unsigned int aptxafterpm;
@property (nonatomic) BOOL hasAudiogrant;
@property (nonatomic) unsigned int audiogrant;
@property (nonatomic) BOOL hasAudiodeny;
@property (nonatomic) unsigned int audiodeny;
@property (nonatomic) BOOL hasA2dpgrant;
@property (nonatomic) unsigned int a2dpgrant;
@property (nonatomic) BOOL hasA2dpdeny;
@property (nonatomic) unsigned int a2dpdeny;
@property (nonatomic) BOOL hasSniffgrant;
@property (nonatomic) unsigned int sniffgrant;
@property (nonatomic) BOOL hasSniffdeny;
@property (nonatomic) unsigned int sniffdeny;
@property (readonly, nonatomic) BOOL hasBtrequestReason;
@property (retain, nonatomic) AWDWiFiNWActivityBtCoexReqestReason *btrequestReason;

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
