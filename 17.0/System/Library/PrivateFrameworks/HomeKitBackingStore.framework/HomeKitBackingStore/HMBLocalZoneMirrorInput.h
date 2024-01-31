@interface HMBLocalZoneMirrorInput : HMBLocalZoneInput

- (id)commitWithOptions:(id)a0 error:(id *)a1;
- (BOOL)stageAdditionForModel:(id)a0 externalID:(id)a1 externalData:(id)a2 error:(id *)a3;
- (BOOL)stageRemovalForModelWithExternalID:(id)a0 error:(id *)a1;

@end
