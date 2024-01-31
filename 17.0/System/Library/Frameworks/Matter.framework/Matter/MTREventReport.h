@class MTREventPath, NSDate, NSNumber, NSError;

@interface MTREventReport : NSObject {
    NSNumber *_timestampValue;
}

@property (readonly, copy, nonatomic) NSNumber *timestamp;
@property (readonly, copy, nonatomic) MTREventPath *path;
@property (readonly, copy, nonatomic) NSNumber *eventNumber;
@property (readonly, copy, nonatomic) NSNumber *priority;
@property (readonly, nonatomic) unsigned long long eventTimeType;
@property (readonly, nonatomic) double systemUpTime;
@property (readonly, copy, nonatomic) NSDate *timestampDate;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

+ (void)initialize;

- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteEventPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0 eventNumber:(id)a1 priority:(unsigned char)a2 timestamp:(const struct Timestamp { unsigned char x0; unsigned long long x1; } *)a3 value:(id)a4;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
