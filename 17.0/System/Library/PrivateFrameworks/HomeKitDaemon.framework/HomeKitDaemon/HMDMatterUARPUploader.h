@interface HMDMatterUARPUploader : UARPUploader

- (BOOL)resumeAssetTransfersForAccessory:(id)a0;
- (BOOL)recvDataFromAccessory:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)pauseAssetTransfersForAccessory:(id)a0;
- (BOOL)accessoryReachable:(id)a0 error:(id *)a1;
- (BOOL)accessoryUnreachable:(id)a0 error:(id *)a1;
- (BOOL)applyStagedAssetsForAccessory:(id)a0 error:(id *)a1;
- (BOOL)cancelAssetStagingForAccessory:(id)a0 asset:(id)a1;
- (BOOL)offerAssetToAccessory:(id)a0 asset:(id)a1 error:(id *)a2;
- (BOOL)rescindStagedAssetsForAccessory:(id)a0 error:(id *)a1;

@end
