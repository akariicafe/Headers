@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _deviceLocalSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _initialDeviceSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _preSyncSessionId;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionId;
    double _ageOfSessionIdInSeconds;
    GEOLocalTime *_eventTime;
    double _lastIcloudSyncDate;
    double _navSessionRelativeTimestamp;
    double _relativeTimestamp;
    unsigned long long _sessionEpoch;
    unsigned int _sequenceNumber;
    unsigned int _userCohortValue;
    BOOL _didPreviouslyRotate;
    struct { unsigned char has_deviceLocalSessionId : 1; unsigned char has_initialDeviceSessionId : 1; unsigned char has_navSessionId : 1; unsigned char has_preSyncSessionId : 1; unsigned char has_sessionId : 1; unsigned char has_ageOfSessionIdInSeconds : 1; unsigned char has_lastIcloudSyncDate : 1; unsigned char has_navSessionRelativeTimestamp : 1; unsigned char has_relativeTimestamp : 1; unsigned char has_sessionEpoch : 1; unsigned char has_sequenceNumber : 1; unsigned char has_userCohortValue : 1; unsigned char has_didPreviouslyRotate : 1; } _flags;
}

@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionId;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionId;
@property (nonatomic) BOOL hasNavSessionRelativeTimestamp;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasEventTime;
@property (retain, nonatomic) GEOLocalTime *eventTime;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) unsigned long long sessionEpoch;
@property (nonatomic) BOOL hasAgeOfSessionIdInSeconds;
@property (nonatomic) double ageOfSessionIdInSeconds;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) BOOL hasInitialDeviceSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } initialDeviceSessionId;
@property (nonatomic) BOOL hasLastIcloudSyncDate;
@property (nonatomic) double lastIcloudSyncDate;
@property (nonatomic) BOOL hasDidPreviouslyRotate;
@property (nonatomic) BOOL didPreviouslyRotate;
@property (nonatomic) BOOL hasDeviceLocalSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } deviceLocalSessionId;
@property (nonatomic) BOOL hasUserCohortValue;
@property (nonatomic) unsigned int userCohortValue;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
