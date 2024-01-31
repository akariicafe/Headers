@class NSArray;

@interface GDScoreRankedPersonEntityTagsInner : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ inferenceEventId;
    void /* unknown type, empty encoding */ scoredPersonEntityTags;
}

@property (nonatomic, readonly) unsigned long long idValue;
@property (nonatomic, readonly) NSArray *scoredPersonEntityTags;
@property (nonatomic, readonly) long long inferenceEventIdValue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdValue:(long long)a0 scoredPersonEntityTags:(id)a1 inferenceEventIdValue:(long long)a2;

@end
