@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint *_address;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (id)stringValue;
- (unsigned long long)identifierType;
- (id)identifierData;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;

@end
