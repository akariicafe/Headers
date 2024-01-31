@class NSString, INExtensionContext;

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding>

@property (readonly, nonatomic) INExtensionContext *_extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)handlerForIntent:(id)a0;

@end
