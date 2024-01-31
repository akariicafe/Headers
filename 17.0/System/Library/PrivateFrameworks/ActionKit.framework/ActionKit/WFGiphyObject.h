@class NSString, NSURL, NSDictionary;

@interface WFGiphyObject : MTLModel <NSSecureCoding, WFNaming, WFSerializableContent, MTLJSONSerializing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *objectId;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *caption;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *images;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)captionJSONTransformer;
+ (id)imagesJSONTransformer;
+ (id)urlJSONTransformer;

- (id)originalImage;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;
- (id)smallestImage;

@end
