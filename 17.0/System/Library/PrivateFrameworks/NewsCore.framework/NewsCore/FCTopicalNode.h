@class NSCountedSet, NSString, NSSet;

@interface FCTopicalNode : NSObject <NSCopying> {
    double _score;
    BOOL _scored;
    NSSet *_identifiers;
    NSSet *_displayedElements;
    NSCountedSet *_topicCollections;
    FCTopicalNode *_parent;
    NSSet *_children;
    double _scoreMultiplier;
    double _relatedness;
    double _specificity;
    double _parentRawScore;
    double _relatednessThreshold;
    double _relatednessKWeight;
    double _topicScoreWeight;
    double _highestScoringRelativeScoreMultiplier;
    NSString *_storedNodeIdentifier;
}

@property (retain) NSString *identifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
