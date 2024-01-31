@interface GDScoredPersonInner : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ inferenceEventId;
}

@property (nonatomic, readonly) unsigned long long idValue;
@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ score;

- (id)init;
- (id)initWithIdValue:(unsigned long long)a0 score:(double)a1 inferenceEventIdValue:(long long)a2;

@end
