@class WFContentProperty, NSString;

@interface WFContentItemStringConversionBehavior : NSObject

@property (readonly, nonatomic) WFContentProperty *property;
@property (readonly, nonatomic) NSString *behaviorDescription;

+ (id)accessingProperty:(id)a0;
+ (id)coercingToStringWithDescription:(id)a0;

- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 description:(id)a1;

@end
