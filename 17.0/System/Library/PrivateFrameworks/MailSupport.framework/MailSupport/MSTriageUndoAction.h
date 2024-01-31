@class EMMessageRepository, NSString, EFFuture;

@interface MSTriageUndoAction : NSObject <MSChangeActionable>

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) EFFuture *changeActionFuture;
@property (readonly, nonatomic) BOOL isUndoSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithChangeActionFuture:(id)a0 messageRepository:(id)a1;

@end
