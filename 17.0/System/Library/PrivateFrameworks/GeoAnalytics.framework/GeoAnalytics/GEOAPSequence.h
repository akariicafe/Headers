@class NSString, NSMutableArray;

@interface GEOAPSequence : NSObject {
    NSMutableArray *_sequence;
    unsigned long long _sequenceIndex;
    NSString *_name;
}

- (void).cxx_destruct;

@end
