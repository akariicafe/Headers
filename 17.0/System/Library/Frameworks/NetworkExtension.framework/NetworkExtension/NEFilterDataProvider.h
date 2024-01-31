@class NSString;

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applySettings:(id)a0 completionHandler:(id /* block */)a1;
- (id)handleInboundDataCompleteForFlow:(id)a0;
- (id)handleInboundDataFromFlow:(id)a0 readBytesStartOffset:(unsigned long long)a1 readBytes:(id)a2;
- (id)handleNewFlow:(id)a0;
- (id)handleOutboundDataCompleteForFlow:(id)a0;
- (id)handleOutboundDataFromFlow:(id)a0 readBytesStartOffset:(unsigned long long)a1 readBytes:(id)a2;
- (id)handleRemediationForFlow:(id)a0;
- (void)handleRulesChanged;
- (void)resumeFlow:(id)a0 withVerdict:(id)a1;
- (void)updateFlow:(id)a0 usingVerdict:(id)a1 forDirection:(long long)a2;

@end
