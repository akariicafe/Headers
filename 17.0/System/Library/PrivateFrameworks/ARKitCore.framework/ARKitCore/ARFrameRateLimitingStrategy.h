@class NSString, ARCircularArray;

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    long long _frameRate;
    ARCircularArray *_mostRecentTimestamps;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mostRecentTimestampsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFrameRate:(long long)a0;
- (BOOL)shouldProcessData:(id)a0;
- (BOOL)shouldRequestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
