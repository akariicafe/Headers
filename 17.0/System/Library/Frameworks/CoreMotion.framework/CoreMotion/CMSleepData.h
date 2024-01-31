@class NSUUID, NSDate;

@interface CMSleepData : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fEventTime;
    long long fEventType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) long long eventType;

+ (id)eventTypeName:(long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)convertToSpringTrackerEntry:(struct CLSpringTrackerEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; long long x4; } *)a0;
- (id)initWithRecordId:(unsigned long long)a0 sourceId:(id)a1 sessionId:(id)a2 eventTime:(id)a3 eventType:(long long)a4;
- (id)initWithSessionId:(id)a0;
- (id)initWithSpringEntry:(const struct CLSpringTrackerEntry { unsigned long long x0; unsigned char x1[16]; unsigned char x2[16]; double x3; long long x4; } *)a0;

@end
