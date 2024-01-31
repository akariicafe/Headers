@class NSString, SFCollaborationCloudSharingResult, NSObject;
@protocol SFCollaborationPerformerDelegate, SFCollaborationItem, OS_dispatch_queue, SFCollaborationCreationDelegate;

@interface SFCollaborationPerformer : NSObject

@property (nonatomic) BOOL requiresParticipants;
@property (nonatomic) BOOL didCancel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *performQueue;
@property (readonly, nonatomic) id<SFCollaborationItem> collaborationItem;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, nonatomic) double deviceScreenScale;
@property (weak, nonatomic) id<SFCollaborationPerformerDelegate> delegate;
@property (weak, nonatomic) id<SFCollaborationCreationDelegate> creationDelegate;
@property (readonly, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, nonatomic) BOOL isRunning;

- (void)perform;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCollaborationItem:(id)a0 activityType:(id)a1 deviceScreenScale:(double)a2;
- (void)_createCollaborationRequestWithCompletionHandler:(id /* block */)a0;
- (void)_createSharingURLForCollaborationRequest:(id)a0;
- (void)_didCreateCollaborationWithResult:(id)a0;
- (void)_fetchCollaborationAppInfoIfNeeded:(id /* block */)a0;
- (void)_handleSubitemInSharedFolder;
- (void)_handleUnsharedFolderWithSharedSubitems;
- (void)_performAfterFolderCheck;
- (void)_performWithAddParticipantsAllowed:(BOOL)a0;
- (id)initWithCollaborationItem:(id)a0 activityType:(id)a1 context:(id)a2;
- (id)initWithCollaborationItem:(id)a0 activityType:(id)a1 requiresParticipants:(BOOL)a2 deviceScreenScale:(double)a3;

@end
