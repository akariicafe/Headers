@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>

@property (nonatomic) BOOL isEnhancedLoggingStateOn;
@property (copy, nonatomic) NSString *loggingConsent;
@property (nonatomic) BOOL canGenerateNewAttachment;
@property (nonatomic) BOOL allowUserAttachmentSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)_getHostname;
- (id)attachmentList;
- (id)attachmentsForParameters:(id)a0;
- (id)attachmentsForParameters:(id)a0 withProgressHandler:(id /* block */)a1;
- (id)filesInDir:(id)a0 matchingPattern:(id)a1 excludingPattern:(id)a2;
- (void)setupWithParameters:(id)a0;
- (void)teardownWithParameters:(id)a0;

@end
