@class NSString;

@interface HRETypeValueTuple : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) id value;

+ (id)type:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 value:(id)a1;

@end
