@class NSString, TRIServerContext;
@protocol TRIPushServiceConnectionCreating, TRIPushServiceConnectionDelegate, TRIPushServiceChannelSubscribing;

@interface TRIPushServiceConnectionMultiplexer : NSObject <TRIPushServiceConnectionMultiplexing> {
    TRIServerContext *_context;
}

@property (readonly, nonatomic) id<TRIPushServiceConnectionCreating> connectionCreator;
@property (readonly, nonatomic) id<TRIPushServiceChannelSubscribing> currentConnection;
@property (readonly, nonatomic) id<TRIPushServiceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isTestingIdentifier:(id)a0;
- (id)initWithConnectionCreator:(id)a0 connectionDelegate:(id)a1 serverContext:(id)a2;
- (void)_logFaultIfNotTestingIdentifier:(id)a0;
- (void)subscribeForRolloutDeployment:(id)a0;
- (void).cxx_destruct;
- (id)_channelIdFromRolloutDeployment:(id)a0;
- (id)_expectedChannelIdsForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (void)unsubscribeForExperimentId:(id)a0;
- (void)subscribeForExperimentId:(id)a0;
- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(id)a0 experimentIds:(id)a1 maxChannelsAllowed:(unsigned long long)a2;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1;
- (void)switchToEnvironment:(unsigned char)a0;
- (id)_channelIdFromExperimentId:(id)a0;

@end
