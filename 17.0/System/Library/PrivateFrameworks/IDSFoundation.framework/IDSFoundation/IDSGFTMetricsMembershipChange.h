@interface IDSGFTMetricsMembershipChange : IDSGFTMetricsReferencePoint {
    double _referenceTime;
}

- (id)initWithFromType:(id)a0 fromUniqueID:(id)a1 anonymizer:(id)a2 templateDictionary:(id)a3;
- (void)receivedKMOverPushFromToken:(id)a0;
- (void)receivedKMOverPushViaCacheForToken:(id)a0;
- (void)receivedKMOverPushViaCacheForToken:(id)a0 atTime:(double)a1;
- (void)receivedKMOverQRFromToken:(id)a0;
- (void)receivedKMOverQUICFromToken:(id)a0;
- (void)receivedUnverifiedKMOverQUICFromToken:(id)a0;
- (double)referenceTime;
- (void)sendRatchetedKMtoAVCForToken:(id)a0;

@end
