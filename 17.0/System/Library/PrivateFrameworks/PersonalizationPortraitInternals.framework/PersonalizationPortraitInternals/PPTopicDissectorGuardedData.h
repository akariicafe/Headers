@class NSMutableArray;

@interface PPTopicDissectorGuardedData : NSObject {
    BOOL stop;
    NSMutableArray *topics;
    NSMutableArray *namedEntities;
    NSMutableArray *topicsExactMatchesInSourceText;
}

- (void).cxx_destruct;

@end
