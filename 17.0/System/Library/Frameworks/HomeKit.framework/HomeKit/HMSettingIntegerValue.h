@interface HMSettingIntegerValue : HMImmutableSettingValue

@property (readonly) long long integerValue;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntegerValue:(long long)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
