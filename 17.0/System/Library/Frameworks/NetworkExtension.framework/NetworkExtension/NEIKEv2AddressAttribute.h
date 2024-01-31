@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {
    NWAddressEndpoint *_address;
    unsigned long long _customType;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (unsigned long long)attributeType;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initCustomWithAttributeType:(unsigned long long)a0 attributeName:(id)a1 addressValue:(id)a2;

@end
