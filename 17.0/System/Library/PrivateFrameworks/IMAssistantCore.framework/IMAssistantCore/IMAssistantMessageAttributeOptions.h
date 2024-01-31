@interface IMAssistantMessageAttributeOptions : NSObject

@property (readonly, nonatomic) BOOL includeRead;
@property (readonly, nonatomic) BOOL includeUnread;
@property (readonly, nonatomic) unsigned long long attributes;

+ (id)optionsWithAttributes:(unsigned long long)a0;
+ (id)optionsWithAttributes:(unsigned long long)a0 sanitizer:(id)a1;

- (id)initWithAttributes:(unsigned long long)a0;
- (id)initWithAttributes:(unsigned long long)a0 sanitizer:(id)a1;

@end
