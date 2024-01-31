@class NSString;

@interface SiriTurnTakingManager.TTManagerRequest : NSObject {
    void /* unknown type, empty encoding */ ttCandidates;
    void /* unknown type, empty encoding */ trpCandidateId;
    void /* unknown type, empty encoding */ requestId;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
