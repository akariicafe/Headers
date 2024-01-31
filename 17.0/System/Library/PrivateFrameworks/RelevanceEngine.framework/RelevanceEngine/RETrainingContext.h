@class RERelevanceEngine, REConcurrentDictionary, RERemoteTrainingContext;

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator> {
    RERelevanceEngine *_relevanceEngine;
    REConcurrentDictionary *_attributes;
    RERemoteTrainingContext *_remoteContext;
}

@property (readonly, nonatomic) RETrainingContext *attributeContext;
@property (readonly, nonatomic) BOOL _wantsAutomaticRemoteContextForwarding;
@property (retain, nonatomic) RERemoteTrainingContext *remoteContext;
@property (retain) RETrainingContext *cachedAttributeContext;
@property (readonly, nonatomic) RERelevanceEngine *relevanceEngine;
@property (readonly, nonatomic) BOOL isCurrent;

- (void)becomeCurrent;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)attributeForKey:(id)a0;
- (void)trainWithUnmanagedElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_didBecomeCurrent;
- (void)_didResignCurrent;
- (void)_willResignCurrent;
- (BOOL)performSimulationCommand:(id)a0 withOptions:(id)a1;
- (void)trainWithElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_configureForRelevanceEngine:(id)a0;
- (void)_trainElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_trainElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_willBecomeCurrent;
- (void)flushTraining;

@end
