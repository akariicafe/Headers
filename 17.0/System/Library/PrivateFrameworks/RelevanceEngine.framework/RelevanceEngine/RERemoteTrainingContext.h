@class NSMutableArray, RERemoteTrainingServer;

@interface RERemoteTrainingContext : RETrainingContext {
    NSMutableArray *_trainingElements;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_trainingInteractions;
    RERemoteTrainingServer *_trainingServer;
}

- (BOOL)isCurrent;
- (void)becomeCurrent;
- (void).cxx_destruct;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (void)trainWithElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_didPerformRemoteTraining;
- (void)_didSetAttributeForRemoteTraining;
- (void)_queue_enqueueRemoteTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_queue_performRemoteTraining;
- (void)_queue_setRemoteAttribute:(id)a0 forKey:(id)a1;
- (void)_willPerformRemoteTraining;
- (void)_willSetAttributeForRemoteTraining;
- (id)initWithProcessName:(id)a0;
- (void)trainWithPredictionElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;

@end
