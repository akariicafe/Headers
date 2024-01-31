@class NSString;

@interface MessageContentRepresentationRequestDelegate : NSObject <EMContentItemRequestDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentObjectID:(id)a0 generateHTMLSnippetsForMailDropContentItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentObjectID:(id)a0 generateHTMLSnippetsForRelatedContentItems:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentObjectID:(id)a0 placeholderHTMLForEmptyContentWithCompletionHandler:(id /* block */)a1;

@end
