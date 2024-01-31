@interface BRCShareAcceptationDirectoryFault : BRCDirectoryItem <BRCShareAcceptationFault>

- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)asShareAcceptationFault;
- (void)deleteShareAcceptationFault;
- (id)initWithFilename:(id)a0 itemID:(id)a1 parentIDWhenSubitem:(id)a2 appLibrary:(id)a3 clientZone:(id)a4 sharingOptions:(unsigned long long)a5;
- (BOOL)isShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)markNeedsTransformIntoNormalFault;
- (void)stageShareAcceptationFaultWithName:(id)a0;

@end
