@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)enterState;
+ (id)exitState;
+ (id)initialTransition;

- (void)dealloc;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
