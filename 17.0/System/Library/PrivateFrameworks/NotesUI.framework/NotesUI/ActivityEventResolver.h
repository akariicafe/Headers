@interface ActivityEventResolver : NSObject {
    void /* unknown type, empty encoding */ objectCache;
    void /* unknown type, empty encoding */ participantCache;
    void /* unknown type, empty encoding */ participantAvatarCache;
    void /* unknown type, empty encoding */ mentionsCache;
    void /* unknown type, empty encoding */ itemCache;
    void /* unknown type, empty encoding */ objectDidUpdateShareObservation;
    void /* unknown type, empty encoding */ object;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 error:(id *)a1;

@end
