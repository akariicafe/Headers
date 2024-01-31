@interface FCTimeOfDayConfiguration : NSObject

@property (readonly, nonatomic) long long start;
@property (readonly, nonatomic) long long end;

- (id)initWithDictionary:(id)a0;
- (id)description;

@end
