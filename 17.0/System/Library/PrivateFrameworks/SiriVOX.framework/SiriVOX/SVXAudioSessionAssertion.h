@class NSString, AFSafetyBlock;
@protocol SVXTaskTracking;

@interface SVXAudioSessionAssertion : NSObject {
    AFSafetyBlock *_relinquishHandler;
}

@property (readonly, nonatomic) unsigned int audioSessionID;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) id<SVXTaskTracking> taskTracker;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)relinquish;
- (id)initWithReason:(id)a0 audioSessionID:(unsigned int)a1 taskTracker:(id)a2 relinquishHandler:(id /* block */)a3;

@end
