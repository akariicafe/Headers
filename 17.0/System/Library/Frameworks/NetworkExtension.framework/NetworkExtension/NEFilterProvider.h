@class NSString, NEFilterProviderConfiguration;

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling>

@property (retain) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
