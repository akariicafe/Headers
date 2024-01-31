@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (long long)int64Value;
- (unsigned long long)category;
- (unsigned long long)scalarType;
- (unsigned long long)privacy;
- (long double)longDoubleValue;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)scalarCategory;
- (id)objectRepresentation;
- (unsigned long long)availability;
- (id)_numValue;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (double)doubleValue;
- (const void *)rawBytes;
- (unsigned short)rawBytesLength;

@end
