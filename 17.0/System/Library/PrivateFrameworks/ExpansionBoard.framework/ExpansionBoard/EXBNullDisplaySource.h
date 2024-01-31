@class FBSDisplayIdentity, NSSet, NSString, FBSDisplayConfiguration, NSMutableSet, NSMutableDictionary;
@protocol FBSDisplayTransformer;

@interface EXBNullDisplaySource : NSObject <EXBDisplaySourcing> {
    NSMutableSet *_displayObservers;
    NSMutableDictionary *_connectedIdentityToConfiguration;
}

@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) NSSet *connectedIdentities;
@property (retain, nonatomic) id<FBSDisplayTransformer> displayTransformer;
@property (copy, nonatomic) id /* block */ transformScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)configurationForIdentity:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)updateTransformsWithCompletion:(id /* block */)a0;
- (void)updateDisplay:(id)a0;
- (void)connectDisplay:(id)a0;
- (void)disconnectDisplay:(id)a0;
- (id)initWithMainDisplay:(id)a0;

@end
