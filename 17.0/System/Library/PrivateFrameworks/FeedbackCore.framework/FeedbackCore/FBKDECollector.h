@class NSString, NSSet, NSMutableSet, FBKGroupedDevice, NSArray;
@protocol FBKAttachmentListenerDelegate, FBKFilerForm;

@interface FBKDECollector : NSObject <FBKAttachmentProvider>

@property (retain, nonatomic) NSString *bugSessionIdentifier;
@property (retain) NSMutableSet *_attachments;
@property (weak, nonatomic) id<FBKFilerForm> form;
@property (weak) id<FBKAttachmentListenerDelegate> listener;
@property (retain) NSSet *sessionCapabilities;
@property BOOL loadingBugSession;
@property BOOL alreadyHandledURL;
@property (readonly, nonatomic) FBKGroupedDevice *device;
@property (retain, nonatomic) NSArray *attachmentDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIDsFromAreas:(id)a0;
+ (id)parametersForGatheringExtension:(id)a0 answers:(id)a1 session:(id)a2 givenParameters:(id)a3;
+ (id)parametersFromAnswers:(id)a0;

- (id)requirements;
- (id)platform;
- (id)attachments;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)removeAttachment:(id)a0;
- (void)removeAllAttachments;
- (void)_addAttachment:(id)a0;
- (void)_removeAttachment:(id)a0;
- (id)bugSession;
- (BOOL)hasFilePromises;
- (void)_didCollectGroup:(id)a0 forAttachment:(id)a1;
- (void)_updateAttachment:(id)a0 withState:(long long)a1;
- (void)_updateAttachmentsWithRequirements:(id)a0 alreadyCollectedGroups:(id)a1 alreadyStartedCollections:(id)a2 deferredCollections:(id)a3;
- (id)attachmentFromRequirement:(id)a0 withExtension:(id)a1;
- (id)attachmentFromRequirement:(id)a0 withExtension:(id)a1 urlExtension:(id)a2;
- (void)cancelCollection:(id)a0;
- (id)collectorError;
- (void)fetchTextDataOnMatcherPredicates:(id)a0 completion:(id /* block */)a1;
- (void)finishInitializationWithCollected:(id)a0 device:(id)a1 error:(id)a2 form:(id)a3 ongoing:(id)a4 deferred:(id)a5 requirements:(id)a6 sessionCapabilities:(id)a7 urlExtensions:(id)a8;
- (void)gatherFilesForAttachment:(id)a0 answers:(id)a1;
- (id)gatherFilesForExtension:(id)a0 answers:(id)a1;
- (BOOL)hasUnmetRequirements;
- (id)initWithRequirements:(id)a0 forDevice:(id)a1 filerForm:(id)a2 extensionsFromURL:(id)a3 listener:(id)a4 shouldGetSessionStatus:(BOOL)a5 shouldCheckDeferredLogs:(BOOL)a6 attachmentDescriptors:(id)a7;
- (id)processAlreadyCollectedGroups:(id)a0 withRequirements:(id)a1;
- (id)processOngoingDECollections:(id)a0 withRequirements:(id)a1 isDeferred:(BOOL)a2;
- (void)processURLExtensions:(id)a0 withMatcherPredicates:(id)a1;
- (void)updateRequirements:(id)a0;

@end
