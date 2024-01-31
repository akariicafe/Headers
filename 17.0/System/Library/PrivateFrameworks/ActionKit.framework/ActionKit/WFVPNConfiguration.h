@class NSUUID, NSString, INAppDescriptor;

@interface WFVPNConfiguration : NSObject <WFSerializableContent, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) INAppDescriptor *appDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 appDescriptor:(id)a2;

@end
