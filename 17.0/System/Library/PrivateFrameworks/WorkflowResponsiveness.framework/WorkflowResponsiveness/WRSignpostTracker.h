@class NSString, NSDictionary, NSArray, WRSignpost, NSMutableDictionary, NSMutableArray;

@interface WRSignpostTracker : NSObject {
    BOOL _isMiddleOfInterval;
    int _count;
    long long _timeUntilFirstSignpostNanoseconds;
    unsigned long long _totalDurationNanoseconds;
    NSMutableDictionary *_environmentMutable;
    NSMutableArray *_intervalsMutable;
    NSMutableArray *_emitsMutable;
}

@property (readonly) WRSignpost *signpost;
@property (readonly) NSString *individuationIdentifier;
@property (readonly) long long timeUntilFirstSignpostNanoseconds;
@property (readonly) unsigned long long totalDurationNanoseconds;
@property (readonly) int count;
@property (readonly) NSDictionary *environment;
@property (readonly) NSArray *intervals;
@property (readonly) NSArray *emits;

- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)exceededDiagnosticThreshold;
- (id)initWithSignpost:(id)a0 individuationIdentifier:(id)a1;

@end
