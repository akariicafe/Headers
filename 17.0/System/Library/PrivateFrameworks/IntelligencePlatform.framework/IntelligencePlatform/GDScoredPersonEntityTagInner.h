@interface GDScoredPersonEntityTagInner : NSObject {
    void /* unknown type, empty encoding */ inferenceEventId;
    void /* unknown type, empty encoding */ tag;
}

@property (nonatomic, readonly) long long inferenceEventIdValue;
@property (nonatomic, readonly) long long gdTag;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ score;

- (id)init;
- (id)initWithGdTag:(long long)a0 score:(double)a1 inferenceEventIdValue:(long long)a2;

@end
