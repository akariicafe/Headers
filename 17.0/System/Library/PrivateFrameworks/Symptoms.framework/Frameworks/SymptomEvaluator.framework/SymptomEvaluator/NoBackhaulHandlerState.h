@class NSDictionary, AWDSymptomsAdvisoryAlternateNetworkType;

@interface NoBackhaulHandlerState : ExpertSystemStateCore

@property (readonly) NSDictionary *entryCellPreds;
@property (readonly) NSDictionary *entryWiFiPreds;
@property (nonatomic) BOOL noPreconditions;
@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric;

+ (id)createStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryCellPreds:(id)a2 entryWiFiPreds:(id)a3;
+ (id)createAndInitializeAWDMetricForStateWithLevel:(int)a0 activationIdentifier:(unsigned int)a1;

- (id)_initStateWithLabel:(id)a0 rank:(unsigned long long)a1 entryCellPreds:(id)a2 entryWiFiPreds:(id)a3;
- (void).cxx_destruct;

@end
