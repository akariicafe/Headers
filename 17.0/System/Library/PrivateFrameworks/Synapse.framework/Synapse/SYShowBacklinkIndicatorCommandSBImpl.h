@class NSString, SBSSystemNotesPresentationHandle;

@interface SYShowBacklinkIndicatorCommandSBImpl : NSObject <SBSSystemNotesPresentationHandleObserver, SYShowBacklinkIndicatorCommandImpl>

@property (retain, nonatomic) SBSSystemNotesPresentationHandle *_handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)runWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)systemNotesPresentationHandle:(id)a0 didChangePresentationMode:(long long)a1;
- (id)initWithDomainIdentifiers:(id)a0 linkIdentifiers:(id)a1;

@end
