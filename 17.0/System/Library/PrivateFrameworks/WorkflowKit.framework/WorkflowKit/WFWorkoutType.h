@class NSString;

@interface WFWorkoutType : NSObject

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)allTypes;

- (void).cxx_destruct;
- (id)initWithActivityType:(unsigned long long)a0;

@end
