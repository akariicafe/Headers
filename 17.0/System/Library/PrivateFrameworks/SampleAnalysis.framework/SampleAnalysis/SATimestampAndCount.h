@class SATimestamp;

@interface SATimestampAndCount : NSObject {
    SATimestamp *_timestamp;
    unsigned long long _count;
}

- (void).cxx_destruct;

@end
