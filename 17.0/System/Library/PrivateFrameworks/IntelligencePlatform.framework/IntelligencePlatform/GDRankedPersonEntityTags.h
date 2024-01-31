@class NSArray, GDScoreRankedPersonEntityTagsInner;

@interface GDRankedPersonEntityTags : NSObject {
    GDScoreRankedPersonEntityTagsInner *inner;
}

@property (readonly, nonatomic) long long idValue;
@property (retain, nonatomic) NSArray *scoredPersonEntityTags;
@property (readonly, nonatomic) long long entityRelevanceInferenceEventId;

- (void).cxx_destruct;
- (long long)feedbackEventId;
- (id)initWithIDValue:(long long)a0 scoredPersonEntityTags:(id)a1 entityRelevanceInferenceEventId:(long long)a2;

@end
