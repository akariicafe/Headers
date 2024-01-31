@class NSURL, CSSearchableItem, EMMessageHeaders, EFSandboxedURLWrapper, NSString, EFInvocationToken, EMSecurityInformation, EMMessageContentCachedMetadata, NSArray, NSData, NSXPCInterface, EMListUnsubscribeCommand, EMMessage;
@protocol _EMDistantContentRepresentation, EMContentItem;

@interface EMContentRepresentation : NSObject <NSSecureCoding, EMMessageContentCachedMetadataDelegate, EFPubliclyDescribable> {
    EFInvocationToken *_invocable;
    BOOL _claimedScopedResource;
    EFSandboxedURLWrapper *_urlWrapper;
    EMMessageContentCachedMetadata *_cachedMetadata;
}

@property (class, readonly) NSXPCInterface *distantContentRepresentationInterface;
@property (class, readonly) NSXPCInterface *contentRequestDelegateInterface;
@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<EMContentItem> contentItem;
@property (retain, nonatomic) id<_EMDistantContentRepresentation> distantContentRepresentation;
@property (retain, nonatomic) NSURL *publicMessageURL;
@property (copy, nonatomic) NSArray *replyToList;
@property (retain, nonatomic) EMMessage *contentMessage;
@property (copy, nonatomic) NSArray *relatedContentItems;
@property (retain, nonatomic) EMSecurityInformation *securityInformation;
@property (retain, nonatomic) CSSearchableItem *searchableItem;
@property (retain, nonatomic) EMListUnsubscribeCommand *unsubscribeCommand;
@property (nonatomic) BOOL hasMoreContent;
@property (nonatomic) long long remainingByteCount;
@property (nonatomic) long long transportType;
@property (retain, nonatomic) EMMessageHeaders *requestedHeaders;
@property (retain, nonatomic) NSData *cachedMetadataJSON;
@property (copy, nonatomic) id /* block */ requestMoreContentBlock;
@property (copy, nonatomic) id /* block */ listUnsubscribeBlock;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) EMContentRepresentation *contentRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (id)temporaryURLWithData:(id)a0 clientIdentifier:(id)a1 preferredFilename:(id)a2 pathExtension:(id)a3 cleanupInvocable:(id *)a4 error:(id *)a5;
+ (id)temporaryURLWithOriginalFileURL:(id)a0 clientIdentifier:(id)a1 preferredFilename:(id)a2 pathExtension:(id)a3 cleanupInvocable:(id *)a4 error:(id *)a5;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)addInvalidationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentMessage:(id)a0 data:(id)a1 clientIdentifier:(id)a2 preferredFilename:(id)a3 extension:(id)a4;
- (id)initWithContentURL:(id)a0 relatedItems:(id)a1 securityInformation:(id)a2;
- (id)initWithData:(id)a0 clientIdentifier:(id)a1 preferredFilename:(id)a2 extension:(id)a3 relatedItems:(id)a4 securityInformation:(id)a5;
- (id)initWithOriginalFileURL:(id)a0 clientIdentifier:(id)a1 preferredFilename:(id)a2 extension:(id)a3 relatedItems:(id)a4 securityInformation:(id)a5;
- (void)mergeUpdatedRepresentation:(id)a0;
- (id)initWithData:(id)a0 clientIdentifier:(id)a1 extension:(id)a2 relatedItems:(id)a3 securityInformation:(id)a4;
- (id)performUnsubscribeAction:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)requestAdditionalContentWithCompletion:(id /* block */)a0;
- (void)setShowRemoteImages:(BOOL)a0;
- (void)setSkipMessageReformatting:(BOOL)a0;
- (BOOL)showRemoteImages;
- (BOOL)skipMessageReformatting;

@end
