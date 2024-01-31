@class NSMutableSet;

@interface _AFSiriClientState : NSObject {
    NSMutableSet *_requestUUIDs;
}

@property (nonatomic) BOOL hasActiveSession;
@property (nonatomic) BOOL isListening;
@property (nonatomic) BOOL isSpeaking;
@property (readonly, nonatomic) unsigned long long notifyState;

- (id)init;
- (void)addRequestUUID:(id)a0;
- (void).cxx_destruct;
- (void)removeRequestUUID:(id)a0;

@end
