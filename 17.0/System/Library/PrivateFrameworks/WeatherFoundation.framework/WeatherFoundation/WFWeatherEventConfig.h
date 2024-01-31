@interface WFWeatherEventConfig : NSObject <NSCopying>

@property (nonatomic) BOOL enabled;

- (id)initWithDictionary:(id)a0 defaulEnabled:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
