@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKExtensionProvider : NSObject

@property (copy, nonatomic) NSString *extensionPoint;
@property (retain, nonatomic) NSDictionary *passKitExtensions;
@property (retain, nonatomic) id matchingContext;
@property (nonatomic) BOOL isBeginningMatching;
@property (retain, nonatomic) NSMutableArray *beginMatchingCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extensionMatchTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue;

+ (id)providerForExtensionPoint:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithExtensionPoint:(id)a0;
- (void).cxx_destruct;
- (void)_beginMatchingExtensionsWithCompletion:(id /* block */)a0;
- (void)_endMatchingExtensions;
- (id)_extensionMatchingEntitlementAttribute;
- (id)_extensionsForContainingApplicationIdentifiers:(id)a0;
- (void)_finishedMatchingExtensions:(id)a0 withError:(id)a1;
- (void)_invokeAndClearBeginMatchingCompletionsWithError:(id)a0;
- (void)beginExtensionRequestWithExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
- (void)extensionWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)extensionsWithContainingApplicationIdentifiers:(id)a0 completion:(id /* block */)a1;

@end
