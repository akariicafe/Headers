@class SLCollaborationHighlight, NSString, NSDictionary, SWPersonIdentityProof, UTType, SWPersonIdentity, NSDate;

@interface SWCollaborationHighlight : SWHighlight <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *collaborationIdentifier;
@property (readonly, nonatomic) SLCollaborationHighlight *slCollaborationHighlight;
@property (readonly, nonatomic) unsigned char highlightType;
@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers;
@property (readonly, nonatomic) NSString *fileProviderID;
@property (readonly, nonatomic) SWPersonIdentityProof *localProofOfInclusion;
@property (readonly, copy, nonatomic) NSDictionary *handleToIdentityMap;
@property (readonly, copy, nonatomic) UTType *type;
@property (readonly, copy, nonatomic) SWPersonIdentity *localIdentity;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) UTType *contentType;

+ (id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)a0;

- (id)attributions;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)URL;
- (id)initWithDictionary:(id)a0;
- (id)timestamp;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forType:(unsigned char)a1 error:(id *)a2;
- (id)initWithSLCollaborationHighlight:(id)a0;
- (id)initWithSLCollaborationHighlight:(id)a0 andType:(unsigned char)a1;

@end
