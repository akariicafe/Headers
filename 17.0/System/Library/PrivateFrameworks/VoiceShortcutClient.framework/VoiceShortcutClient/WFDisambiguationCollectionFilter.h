@class NSString, LNAppShortcutDynamicOptionsProviderReference;

@interface WFDisambiguationCollectionFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *systemEntityCollectionIdentifier;
@property (retain, nonatomic) LNAppShortcutDynamicOptionsProviderReference *namedQueryReference;

- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializableRepresentation;
- (id)initWithNamedQueryReference:(id)a0;
- (id)initWithSystemEntityCollectionIdentifier:(id)a0;
- (id)initWithSystemEntityCollectionIdentifier:(id)a0 namedQueryReference:(id)a1;

@end
