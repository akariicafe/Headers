@interface AMSOptional : NSObject

@property (readonly, nonatomic) id value;

+ (id)optionalWithNil;
+ (id)optionalWithValue:(id)a0;

- (id)init;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;

@end
