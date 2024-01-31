@class NSString;
@protocol HUTriggerEditorDelegate;

@interface _TriggerEditorDelegateWrapper : NSObject <HUTriggerEditorDelegate>

@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)triggerEditor:(id)a0 didCommitTriggerBuilder:(id)a1 withError:(id)a2;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (BOOL)triggerEditor:(id)a0 shouldCommitTriggerBuilder:(id)a1;

@end
