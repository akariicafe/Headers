@class NSMutableSet, NSMutableDictionary;

@interface IMAutomationMessageSend : NSObject

@property (retain, nonatomic) NSMutableSet *pendingSendGUIDs;
@property (retain, nonatomic) NSMutableDictionary *sentMessageInfo;

- (id)init;
- (void).cxx_destruct;
- (id)sendMessage:(id)a0 destinationID:(id)a1 filePaths:(id)a2 isAudioMessage:(BOOL)a3 groupID:(id)a4 bundleID:(id)a5 attributionInfoName:(id)a6 service:(id)a7 timeOut:(double)a8 threadIdentifier:(id)a9 error:(id *)a10;
- (id)appendFilePathsWithGUIDs:(id)a0 withText:(id)a1;
- (id)clearAttachmentsUploadedToCloudkit;
- (id)copyFilePathsToTmpLocation:(id)a0;
- (id)createIMMessageToSendWithMessage:(id)a0 filePaths:(id)a1 bundleID:(id)a2 attributionInfoName:(id)a3 isAudioMessage:(BOOL)a4 threadIdentifier:(id)a5;
- (id)deleteAttachmentWithMessageGUID:(id)a0 andFilePathIndex:(long long)a1;
- (void)deleteTmpFilePath:(id)a0;
- (id)dictionaryFromGUID:(id)a0;
- (id)fileSizeForMessageGUID:(id)a0 withFilePathIndex:(long long)a1;
- (id)loadHighResolutionFileForMessageGUID:(id)a0 withFilePathIndex:(long long)a1;
- (id)sendIMMessage:(id)a0 chat:(id)a1 timeOut:(double)a2 resultDict:(id)a3 error:(id *)a4;
- (id)sendMessage:(id)a0 destinationID:(id)a1 filePaths:(id)a2 groupID:(id)a3 bundleID:(id)a4 attributionInfoName:(id)a5 service:(id)a6 timeOut:(double)a7 error:(id *)a8;
- (id)sendMessage:(id)a0 destinationID:(id)a1 filePaths:(id)a2 groupID:(id)a3 service:(id)a4 timeOut:(double)a5 error:(id *)a6;
- (id)sendMessage:(id)a0 destinationID:(id)a1 timeOut:(double)a2 threadIdentifier:(id)a3 error:(id *)a4;
- (id)uploadAttachmentToCloudkitWithMessageGUID:(id)a0 andFilePathIndex:(long long)a1;

@end
