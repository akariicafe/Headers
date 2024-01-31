@class MessageServiceSession, NSMutableSet, NSMutableDictionary;

@interface MessageAttachmentController : NSObject

@property (retain, nonatomic) NSMutableSet *pendingRemoteFileRequests;
@property (retain, nonatomic) NSMutableDictionary *localPayloadDataRequestGUIDToCompletionBlockMap;
@property (retain, nonatomic) NSMutableDictionary *eagerUploadStatuses;
@property (readonly, weak, nonatomic) MessageServiceSession *session;
@property (readonly, nonatomic) BOOL shouldSendLowResolutionOnly;

+ (id)_capabilitiesForTransfers:(id)a0 supportsASTC:(BOOL)a1;
+ (id)_combinedTransferUserInfoForAttachmentSendContexts:(id)a0;

- (id)initWithSession:(id)a0;
- (id)deliveryController;
- (id)stickerRefreshDeliveryController;
- (void).cxx_destruct;
- (void)eagerUploadCancel:(id)a0;
- (void)eagerUploadTransfer:(id)a0 recipients:(id)a1;
- (unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (void)maxTransferFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
- (void)remoteFileResponse:(id)a0;
- (void)retrieveLocalFileTransfer:(id)a0 attachmentIndex:(unsigned long long)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 requestedSize:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (unsigned long long)_maxCompressedPayloadDataLength;
- (void)sendAttachmentsForMessage:(id)a0 canSendInline:(BOOL)a1 displayIDs:(id)a2 additionalContext:(id)a3 mode:(unsigned long long)a4 fromID:(id)a5 recipients:(id)a6 completionBlock:(id /* block */)a7 uploadFailureBlock:(id /* block */)a8;
- (id)_createPayloadRequestDictionaryForMessageGUID:(id)a0 requestKey:(id)a1;
- (id)_createPayloadResponseDictionaryWithDictionary:(id)a0 payloadData:(id)a1 attachments:(id)a2;
- (void)_deleteTransferInfoForKey:(id)a0;
- (id)_fetchSizeLimitsForTransfer:(id)a0 mode:(unsigned long long)a1;
- (void)_fetchStandardSizeLimit:(unsigned long long *)a0 highQualitySizeLimit:(unsigned long long *)a1 forTransfer:(id)a2;
- (id)_fileHash:(id)a0;
- (void)_fileTransferSizeForAAVideoFromServerBag:(unsigned long long *)a0 smallSize:(unsigned long long *)a1 serverBag:(id)a2;
- (void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long *)a0 smallSize:(unsigned long long *)a1 serverBag:(id)a2;
- (unsigned long long)_largeFileSizeFor:(id)a0 allowedLargerRepresentation:(BOOL *)a1;
- (unsigned long long)_maxAllowedStereoVideoSize;
- (unsigned long long)_minSizeForLargeAuxVideo;
- (BOOL)_previewAttachmentEnabledForStickers;
- (void)_processDownloadedPayload:(id)a0 forMessageGUID:(id)a1 balloonBundleID:(id)a2 fromIdentifier:(id)a3 senderToken:(id)a4 withCompletionBlock:(id /* block */)a5;
- (void)_sendAttachmentToPeerDevice:(unsigned long long)a0 fileTransferGUID:(id)a1 messageGuid:(id)a2 fileURL:(id)a3 useLocalPeersFileAPI:(BOOL)a4 error:(long long)a5;
- (void)_sendURL:(id)a0 urlToRemove:(id)a1 topic:(id)a2 sessionInfo:(id)a3 messageGUID:(id)a4 fileTransferGUID:(id)a5 attachmentSendContexts:(id)a6 failIfError:(BOOL)a7 sendStatus:(id)a8 attachmentStatus:(id)a9 group:(id)a10;
- (void)_setTransferInfo:(id)a0 key:(id)a1;
- (BOOL)_shouldAutoAccept:(id)a0 transfer:(id)a1 isAltAccountDevice:(BOOL)a2 shouldDownloadFromPeer:(BOOL)a3;
- (BOOL)_shouldAutoDownloadUTIType:(id)a0 fileSize:(unsigned long long)a1;
- (BOOL)_shouldAutoDownloadUTIType:(id)a0 fileSize:(unsigned long long)a1 shouldForceAutoDownloadIfPossibble:(BOOL)a2;
- (BOOL)_shouldDisableFasterDownload:(id)a0 message:(id)a1;
- (BOOL)_shouldUploadPayloadDataOverMMCS:(id)a0;
- (unsigned long long)_smallerImageFileSize;
- (double)_stickerUploadTTL;
- (void)_transcodeURL:(id)a0 transfer:(id)a1 sizes:(id)a2 commonCapabilities:(id)a3 sendStatus:(id)a4 urlGroup:(id)a5 didTranscode:(id /* block */)a6 handleURL:(id /* block */)a7;
- (id)_transferInfoFileForKey:(id)a0;
- (id)_transferInfoForKey:(id)a0;
- (BOOL)acceptFileTransfer:(id)a0;
- (void)downloadPayloadDataForMessageGUID:(id)a0 payLoadDictionary:(id)a1 topic:(id)a2 completionBlock:(id /* block */)a3;
- (id)eagerUploadKeyForURL:(id)a0 transcodeDictionary:(id)a1 capabilities:(id)a2;
- (id)eagerUploadStatusForKey:(id)a0;
- (void)fetchPayloadDataFromCompanionForGUID:(id)a0 completionBlock:(id /* block */)a1;
- (void)findTranscoderCapabilitiesAcrossRecipients:(id)a0 forTransfers:(id)a1 completion:(id /* block */)a2;
- (void)handlePayloadDataRequest:(id)a0 attempts:(unsigned long long)a1;
- (void)handlePayloadDataResponse:(id)a0;
- (void)handleTranscodeCompletionBlockForMessage:(id)a0 displayIDs:(id)a1 additionalContext:(id)a2 attemptedTranscode:(BOOL)a3 transcodedTransferGUIDs:(id)a4 containsAutoLoopVideo:(BOOL)a5 outputURLs:(id)a6 text:(id)a7 success:(BOOL)a8 error:(id)a9 completionBlock:(id /* block */)a10;
- (void)processDownloadedPayloadData:(id)a0 forMessageGUID:(id)a1 balloonBundleID:(id)a2 fromIdentifier:(id)a3 senderToken:(id)a4 withCompletionBlock:(id /* block */)a5;
- (void)processMessageAttachmentDictionary:(id)a0 forMessageGUID:(id)a1 balloonBundleID:(id)a2 fromIdentifier:(id)a3 senderToken:(id)a4 withCompletionBlock:(id /* block */)a5;
- (void)remotefileRequest:(id)a0 attempts:(long long)a1 shouldRetry:(BOOL)a2;
- (void)retrieveAttachmentsForMessage:(id)a0 inlineAttachments:(id)a1 displayID:(id)a2 topic:(id)a3 comingFromStorage:(BOOL)a4 shouldForceAutoDownload:(BOOL)a5 senderContext:(id)a6 completionBlock:(id /* block */)a7;
- (void)sendAttachmentsForMessage:(id)a0 canSendInline:(BOOL)a1 displayIDs:(id)a2 additionalContext:(id)a3 commonCapabilities:(id)a4 mode:(unsigned long long)a5 sessionInfo:(id)a6 topic:(id)a7 completionBlock:(id /* block */)a8 uploadFailureBlock:(id /* block */)a9;
- (void)sendFallbackAttachmentsForMessage:(id)a0 displayIDs:(id)a1 additionalContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)sendPayloadData:(id)a0 messageGUID:(id)a1 fromID:(id)a2 recipients:(id)a3 completionBlock:(id /* block */)a4;
- (void)sendPayloadData:(id)a0 messageGUID:(id)a1 sessionInfo:(id)a2 topic:(id)a3 completionBlock:(id /* block */)a4;
- (void)sessionInfoForBusinessReceipients:(id)a0 fromID:(id)a1 completion:(id /* block */)a2;
- (void)transcribeMessageIfNeeded:(id)a0 forTransfer:(id)a1;
- (void)updateGroupPhoto:(id)a0 forChat:(id)a1;
- (void)updateGroupPhoto:(id)a0 forChat:(id)a1 messageGuid:(id)a2;

@end
