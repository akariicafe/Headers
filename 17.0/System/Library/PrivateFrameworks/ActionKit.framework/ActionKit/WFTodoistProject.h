@class NSString, WFColor, NSDictionary;

@interface WFTodoistProject : MTLModel <NSSecureCoding, MTLJSONSerializing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long projectId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) WFColor *color;
@property (readonly, nonatomic) BOOL collapsed;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)collapsedJSONTransformer;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
