@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (int)precision;
- (id)typeNamespace;
- (int)width;
- (id)tokens;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)rawString;
- (id)type;

@end
