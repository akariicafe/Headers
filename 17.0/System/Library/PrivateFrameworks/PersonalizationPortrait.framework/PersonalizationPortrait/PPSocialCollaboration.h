@class NSString, NSDictionary, NSData, NSDate;

@interface PPSocialCollaboration : PPSocialHighlight

@property (readonly, nonatomic) NSData *handleToIdentityMap;
@property (readonly, nonatomic) NSString *collaborationIdentifier;
@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers;
@property (readonly, nonatomic) NSString *contentDisplayName;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *fileProviderId;
@property (readonly, nonatomic) NSData *proofOfInclusionHashes;
@property (readonly, nonatomic) NSData *proofOfInclusionLocalKeyHash;
@property (readonly, nonatomic) NSData *localIdentity;
@property (readonly, nonatomic) NSData *localIdentityProof;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 resourceURL:(id)a1 timestamp:(id)a2 attributionIdentifiers:(id)a3 supplementaryData:(id)a4 collaborationIdentifier:(id)a5 contentDisplayName:(id)a6 contentCreationDate:(id)a7 contentUTIType:(id)a8 fileProviderId:(id)a9 earliestAttributionIdentifiers:(id)a10 localIdentity:(id)a11 localIdentityProof:(id)a12 handleToIdentityMap:(id)a13;
- (id)initWithIdentifier:(id)a0 resourceURL:(id)a1 timestamp:(id)a2 attributionIdentifiers:(id)a3 supplementaryData:(id)a4 collaborationIdentifier:(id)a5 contentDisplayName:(id)a6 contentCreationDate:(id)a7 contentUTIType:(id)a8 fileProviderId:(id)a9 earliestAttributionIdentifiers:(id)a10 localIdentity:(id)a11 localIdentityProof:(id)a12 handleToIdentityMap:(id)a13 score:(id)a14;

@end
