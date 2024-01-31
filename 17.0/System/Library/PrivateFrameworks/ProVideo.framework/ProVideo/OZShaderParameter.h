@class NSString;

@interface OZShaderParameter : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

- (void)dealloc;
- (id)initWithName:(id)a0 type:(long long)a1;

@end
