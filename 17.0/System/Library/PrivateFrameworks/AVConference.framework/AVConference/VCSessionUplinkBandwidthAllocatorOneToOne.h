@class NSString, NSMutableDictionary;

@interface VCSessionUplinkBandwidthAllocatorOneToOne : VCObject <VCSessionUplinkBandwidthAllocator> {
    NSMutableDictionary *_streamTokenToTableEntryMap;
    NSMutableDictionary *_streamTokenToEnableMap;
    NSMutableDictionary *_bandwithAllocationTable;
}

@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;
@property (nonatomic, getter=isCamera1080pAvailable) BOOL camera1080pAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)insertionIndex:(id)a0 forValue:(id)a1;
+ (id)microphoneOnlyTierTable;
+ (id)valueForNetworkBitrate:(id)a0 networkBitrate:(unsigned int)a1;
+ (id)videoCallMicrophoneTierTable;

- (id)init;
- (void)dealloc;
- (void)addBandwidthAllocationTableEntry:(id)a0 updateNow:(BOOL)a1;
- (id)baseNetworkBitrateSplitForTargetBitrate:(unsigned int)a0 baseNetworkBitrate:(unsigned long long *)a1;
- (unsigned long long)findAndSplitExtraBitrateFromCappedStreams:(id)a0 remainderBitrate:(long long)a1 currentStreamGroupBitrate:(unsigned long long)a2 streamToken:(long long)a3 totalRemainderBitrateWeight:(unsigned long long)a4;
- (id)findBitrateSplitForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1;
- (void)generateBandwidthAllocationTableWithTierTables:(id)a0 qualityIndices:(id)a1 qualityIndexToStreamToken:(id)a2;
- (void)getCurrentEnabledTierTables:(id)a0 qualityIndices:(id)a1 qualityIndexToStreamToken:(id)a2;
- (BOOL)isEnabledStreamToken:(long long)a0;
- (BOOL)isStreamGroupEnabled:(unsigned int)a0;
- (BOOL)peerSubscription:(BOOL)a0 streamID:(unsigned short)a1;
- (void)recomputeAllocationTableIfRequired;
- (id)repairStreamIDsForStreamToken:(long long)a0;
- (BOOL)shouldUseMinMicBitrate:(unsigned long long)a0 streamToken:(long long)a1 remainderBitrate:(long long)a2;
- (BOOL)shouldUseMultipleStreamGroupAlgorithm;
- (id)streamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrateCap:(unsigned int)a1;
- (id)streamIDsIfStreamTokenIsEnabled:(long long)a0;
- (id)streamIDsIfStreamTokenIsPresent:(long long)a0;
- (void)streamToken:(long long)a0 enabled:(BOOL)a1;
- (id)targetBitratesForStreamToken:(long long)a0 targetNetworkBitrate:(unsigned int)a1 preferNetworkBitrates:(BOOL)a2;

@end
