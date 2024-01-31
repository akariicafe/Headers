@class NSSet, NSDictionary;

@interface CHSWidgetDescriptorsBox : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *descriptors;
@property (readonly, copy, nonatomic) NSDictionary *descriptorsByExtensionIdentifier;

- (void)_performValidation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
