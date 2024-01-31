@class NSString, HMICIFilterAttributeValue;

@interface HMICIFilterAttribute : HMFObject

@property (readonly) NSString *name;
@property (readonly) NSString *type;
@property (readonly) HMICIFilterAttributeValue *value;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
