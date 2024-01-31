@class NSString;

@interface WebDefaultPolicyDelegate : NSObject <WebPolicyDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPolicyDelegate;

- (void)webView:(id)a0 decidePolicyForMIMEType:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 decidePolicyForNewWindowAction:(id)a1 request:(id)a2 newFrameName:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 unableToImplementPolicyWithError:(id)a1 frame:(id)a2;
- (BOOL)webView:(id)a0 shouldGoToHistoryItem:(id)a1;

@end
