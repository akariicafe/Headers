@class NSArray, NSString, NSURL, _SWCollaborationMetadata;

@interface _SWPendingCollaboration : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) _SWCollaborationMetadata *collaborationMetadata;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithMetadata:(id)a0;
- (id)initWithAPIMetadata:(id)a0;
- (id)initWithFileAtURL:(id)a0;
- (BOOL)isEqualToCollaborationContent:(id)a0;
- (id)processSigningQueue;
- (id)softSigningController;

@end
