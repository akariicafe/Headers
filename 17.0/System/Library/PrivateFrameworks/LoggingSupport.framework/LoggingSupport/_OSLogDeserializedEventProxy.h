@class _OSLogEventSerializationMetadata, NSDictionary;

@interface _OSLogDeserializedEventProxy : OSLogEventProxy {
    BOOL _unixDateNeedsLookup;
    BOOL _unixTimeZoneNeedsLookup;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _unixTimeZone;
    struct timeval { long long tv_sec; int tv_usec; } _unixDate;
    BOOL _lossStartUnixDateNeedsLookup;
    BOOL _lossStartUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossStartUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossStartUnixTimeZone;
    BOOL _lossEndUnixDateNeedsLookup;
    BOOL _lossEndUnixTimeZoneNeedsLookup;
    struct timeval { long long tv_sec; int tv_usec; } _lossEndUnixDate;
    struct timezone { int tz_minuteswest; int tz_dsttime; } _lossEndUnixTimeZone;
    unsigned long long _type;
}

@property (retain, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (retain, nonatomic) NSDictionary *curEventDictionary;
@property (nonatomic) BOOL needsTypeLookup;

- (struct timezone { int x0; int x1; } *)unixTimeZone;
- (id)formatString;
- (unsigned long long)activityIdentifier;
- (unsigned long long)logType;
- (id)sender;
- (unsigned long long)traceIdentifier;
- (id)category;
- (id)processImageUUID;
- (id)subsystem;
- (struct timeval { long long x0; int x1; } *)lossStartUnixDate;
- (unsigned long long)lossStartMachContinuousTimestamp;
- (unsigned long long)threadIdentifier;
- (struct timezone { int x0; int x1; } *)lossEndUnixTimeZone;
- (id)process;
- (void)_resetNeedsLookup;
- (unsigned long long)signpostType;
- (void)_populate_timeval:(struct timeval { long long x0; int x1; } *)a0 withDict:(id)a1;
- (unsigned long long)size;
- (unsigned long long)timeToLive;
- (id)signpostName;
- (const char *)processImageUUIDBytes;
- (unsigned long long)signpostIdentifier;
- (unsigned long long)creatorProcessUniqueIdentifier;
- (id)senderImagePath;
- (id)senderImageUUID;
- (struct timeval { long long x0; int x1; } *)lossEndUnixDate;
- (unsigned long long)senderImageOffset;
- (unsigned long long)creatorActivityIdentifier;
- (unsigned long long)parentActivityIdentifier;
- (id)date;
- (id)bootUUID;
- (unsigned long long)continuousNanosecondsSinceBoot;
- (id)decomposedMessage;
- (id)timeZone;
- (unsigned long long)transitionActivityIdentifier;
- (void).cxx_destruct;
- (unsigned long long)signpostScope;
- (const char *)senderImageUUIDBytes;
- (id)composedMessage;
- (struct timezone { int x0; int x1; } *)lossStartUnixTimeZone;
- (unsigned long long)lossEndMachContinuousTimestamp;
- (struct { unsigned int x0; BOOL x1; })lossCount;
- (unsigned long long)machContinuousTimestamp;
- (id)processImagePath;
- (id)_frameForDict:(id)a0;
- (struct timeval { long long x0; int x1; } *)unixDate;
- (void)_populate_timezone:(struct timezone { int x0; int x1; } *)a0 withDict:(id)a1;
- (int)processIdentifier;
- (unsigned long long)type;
- (id)backtrace;

@end
