@class NSString, ATXScoreDict;

@interface _ATXDeprecatedScoreInterpreterCtx : NSObject {
    unsigned long long stackLen;
    double stack[500];
    ATXScoreDict *inputScores;
    ATXScoreDict *subscores;
    NSString *intentType;
}

- (id)initWithInputScores:(id)a0 intentType:(id)a1;
- (void).cxx_destruct;

@end
