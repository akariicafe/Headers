@class NSDictionary, NSString;

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (copy) NSDictionary *remediationMap;
@property (copy) NSDictionary *URLAppendStringMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
