@class NSArray;

@interface GDScoreRankedEntityTagPersonsInner : NSObject {
    void /* unknown type, empty encoding */ inferenceEventId;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ scoredEntities;
}

@property (nonatomic, readonly) long long gdTag;
@property (nonatomic, readonly) NSArray *scoredEntities;
@property (nonatomic, readonly) long long inferenceEventIdValue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGdTag:(long long)a0 scoredEntities:(id)a1 inferenceEventIdValue:(long long)a2;

@end
