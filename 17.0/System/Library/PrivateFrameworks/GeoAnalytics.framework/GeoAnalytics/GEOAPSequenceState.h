@class NSString, NSMutableArray;

@interface GEOAPSequenceState : NSObject {
    BOOL _finished;
    double _startTime;
    double _timeout;
    int _emitType;
    NSString *_name;
    NSMutableArray *_admissionPairs;
    NSMutableArray *_rejectionPairs;
}

- (void).cxx_destruct;

@end
