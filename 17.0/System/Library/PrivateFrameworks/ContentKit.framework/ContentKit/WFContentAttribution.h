@class WFContentLocation, NSOrderedSet, NSString;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long disclosureLevel;
@property (readonly, nonatomic) WFContentLocation *origin;
@property (retain, nonatomic) NSOrderedSet *privateItemIdentifiers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSOrderedSet *disclosureWarnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifiers:(id)a2;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)shortcutsAppAttribution;
+ (id)attributionWithAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 managedLevel:(unsigned long long)a3;
+ (id)attributionWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 disclosureWarnings:(id)a2 originalItemIdentifier:(id)a3;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 disclosureWarnings:(id)a2 originalItemIdentifiers:(id)a3;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 disclosureWarnings:(id)a2 originalItemIdentifiers:(id)a3 count:(unsigned long long)a4;
+ (id)attributionWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 originalItemIdentifier:(id)a2;
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributionByReplacingAccountWithAppOrigin;
- (id)attributionByUpdatingItemsCount:(unsigned long long)a0;
- (id)initWithDisclosureLevel:(unsigned long long)a0 origin:(id)a1 disclosureWarnings:(id)a2 originalItemIdentifiers:(id)a3 count:(unsigned long long)a4;
- (id)wfSerializedRepresentationWithPrivateItemIdentifiers;

@end
