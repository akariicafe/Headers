@class NSArray, GDScoreRankedEntityTagPersonsInner;

@interface GDRankedEntityTagPersons : NSObject {
    GDScoreRankedEntityTagPersonsInner *inner;
}

@property (readonly, nonatomic) long long tag;
@property (retain, nonatomic) NSArray *scoredEntities;
@property (readonly, nonatomic) long long feedbackEventId;

- (void).cxx_destruct;
- (id)initWithTag:(long long)a0 scoredEntities:(id)a1 entityRelevanceInferenceEventId:(long long)a2;

@end
