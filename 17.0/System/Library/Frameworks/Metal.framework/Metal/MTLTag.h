@interface MTLTag : NSObject

@property (readonly) unsigned long long tagType;

- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithTagType:(unsigned long long)a0;

@end
