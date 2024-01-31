@class NSString;

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
