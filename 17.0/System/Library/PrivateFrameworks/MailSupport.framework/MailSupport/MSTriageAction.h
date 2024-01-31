@class NSString, EMMessageRepository, EFFuture, MSMessageListItemSelection;
@protocol MSTriageActionDelegate;

@interface MSTriageAction : NSObject <MSChangeActionable>

@property (nonatomic) long long origin;
@property (nonatomic) long long actor;
@property (readonly, nonatomic) MSMessageListItemSelection *messageListItemSelection;
@property (readonly, nonatomic) BOOL isUndoSupported;
@property (readonly, weak, nonatomic) id<MSTriageActionDelegate> delegate;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) EFFuture *changeActionFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)_performAction:(id)a0 actionName:(id)a1;
+ (void)_performAction:(id)a0 undoManager:(id)a1 actionName:(id)a2;

@end
