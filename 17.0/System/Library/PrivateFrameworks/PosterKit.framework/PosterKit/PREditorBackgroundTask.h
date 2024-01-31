@class NSString;

@interface PREditorBackgroundTask : NSObject <BSDescriptionStreamable>

@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;

@end
