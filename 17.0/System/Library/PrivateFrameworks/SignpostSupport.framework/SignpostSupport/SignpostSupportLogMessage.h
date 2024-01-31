@class NSUUID, NSString;

@interface SignpostSupportLogMessage : SignpostSupportObject <SignpostSupportLoggingSupportArchiveEvent>

@property (nonatomic) unsigned long long _machContinuousTimestamp;
@property (nonatomic) int processID;
@property (nonatomic) unsigned long long processUniqueID;
@property (nonatomic) unsigned long long threadID;
@property (nonatomic) unsigned char messageType;
@property (nonatomic) long long tv_sec;
@property (nonatomic) int tv_usec;
@property (nonatomic) int tz_minuteswest;
@property (nonatomic) int tz_dsttime;
@property (retain, nonatomic) NSUUID *processImageUUID;
@property (retain, nonatomic) NSString *processImagePath;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSUUID *senderImageUUID;
@property (retain, nonatomic) NSString *senderImagePath;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) BOOL hasNonScalarDynamicData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializationTypeNumber;

- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)humanReadableType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
- (id)initWithSubsystem:(id)a0 category:(id)a1 timebaseRatio:(double)a2 unixDate:(struct timeval { long long x0; int x1; } *)a3 unixTimeZone:(struct timezone { int x0; int x1; } *)a4;

@end
