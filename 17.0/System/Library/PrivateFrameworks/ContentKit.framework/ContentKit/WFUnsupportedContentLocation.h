@class NSDictionary, NSString;

@interface WFUnsupportedContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *backingSerializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)locationWithIdentifier:(id)a0 serializedRepresentation:(id)a1;

- (id)localizedTitle;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 serializedRepresentation:(id)a1;

@end
