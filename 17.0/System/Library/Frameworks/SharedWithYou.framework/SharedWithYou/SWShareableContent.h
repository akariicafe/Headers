@class LPLinkMetadata, NSString, NSArray, NSItemProvider, NSURL, NSPersonNameComponents;
@protocol SWShareableContentRepresentationProvider;

@interface SWShareableContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceSceneIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *representations;
@property (retain, nonatomic) id<SWShareableContentRepresentationProvider> representationProvider;
@property (readonly, nonatomic) LPLinkMetadata *metadata;
@property (readonly, nonatomic) BOOL hasPossibleCollaborationRepresentation;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSURL *highlightURL;
@property (readonly, copy, nonatomic) NSString *initiatorHandle;
@property (readonly, nonatomic) NSPersonNameComponents *initiatorNameComponents;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)sourceIdentifier;
- (BOOL)canLoadObjectOfClass:(Class)a0;
- (id)registeredTypeIdentifiers;
- (BOOL)hasRepresentationConformingToTypeIdentifier:(id)a0;
- (id)initWithSourceSceneIdentifier:(id)a0 sourceBundleIdentifier:(id)a1 metadata:(id)a2 representations:(id)a3 highlightURL:(id)a4 initiatorHandle:(id)a5 initiatorNameComponents:(id)a6;
- (void)loadRepresentationForTypeIdentifier:(id)a0 itemProviderIndex:(long long)a1 completionHandler:(id /* block */)a2;
- (id)registeredOpenInPlaceTypeIdentifiers;
- (id)sourceApplicationIdentifier;

@end
