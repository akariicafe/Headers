@class NSString;

@interface SGWalletPassAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canAddPass:(id)a0;
+ (BOOL)isPassAvailable:(id)a0;

- (id)_extractRelevantSemanticTagsFromPass:(id)a0;
- (void)_dissectMessage:(id)a0 entity:(id)a1;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)_enrichmentsForWalletPassDictionary:(id)a0 filePath:(id)a1 parentMessage:(id)a2 parentEntity:(id)a3;
- (id)_extractPassInformation:(id)a0 filePath:(id)a1 state:(int)a2;
- (id)_filteredWalletPassAttachmentsFrom:(id)a0;
- (id)_passDataForFilePath:(id)a0;

@end
