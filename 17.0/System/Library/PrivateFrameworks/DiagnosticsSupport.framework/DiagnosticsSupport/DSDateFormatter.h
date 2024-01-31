@class NSMutableDictionary;

@interface DSDateFormatter : NSObject

@property (retain, nonatomic) NSMutableDictionary *dateFormatters;

+ (id)sharedFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)formatterWithType:(long long)a0;

@end
