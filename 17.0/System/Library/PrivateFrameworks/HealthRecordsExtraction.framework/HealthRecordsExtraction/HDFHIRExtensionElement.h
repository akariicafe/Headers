@class NSString, NSDictionary;
@protocol NSCopying;

@interface HDFHIRExtensionElement : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *URI;
@property (readonly, copy, nonatomic) id<NSCopying> value;
@property (readonly, copy, nonatomic) NSDictionary *JSONDictionary;

+ (id)FHIRExtensionElementsFromJSONExtensionObject:(id)a0 error:(id *)a1;
+ (id)FHIRExtensionElementWithJSONObject:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSONDictionary:(id)a0 URI:(id)a1 value:(id)a2;

@end
