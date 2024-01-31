@class _DKEvent, NSDictionary, NSArray, NSNumber;

@interface _DKEventAdapter : NSObject {
    NSDictionary *_structuredMetadata;
    NSArray *_customMetadata;
    NSNumber *_startDayOfWeek;
    NSNumber *_endDayOfWeek;
}

@property (retain, nonatomic) _DKEvent *dkEvent;

- (short)valueClass;
- (long long)valueInteger;
- (id)stringValue;
- (long long)startSecondOfDay;
- (BOOL)boolValue;
- (id)startDate;
- (id)customMetadata;
- (id)streamName;
- (long long)integerValue;
- (unsigned long long)hash;
- (double)confidence;
- (long long)endDayOfWeek;
- (id)creationDate;
- (double)valueDouble;
- (id)uuid;
- (id)forwardingTargetForSelector:(SEL)a0;
- (long long)endSecondOfDay;
- (id)endDate;
- (id)localCreationDate;
- (id)stream;
- (id)structuredMetadata;
- (long long)valueTypeCode;
- (id)timeZone;
- (void).cxx_destruct;
- (double)doubleValue;
- (id)source;
- (long long)startDayOfWeek;
- (id)metadata;
- (long long)secondsFromGMT;
- (id)value;
- (long long)compatibilityVersion;
- (BOOL)isEqual:(id)a0;
- (id)UUID;
- (id)uuidHash;
- (id)valueString;

@end
