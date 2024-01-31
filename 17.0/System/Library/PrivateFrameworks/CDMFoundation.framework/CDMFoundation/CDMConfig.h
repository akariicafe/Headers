@class NSOrderedSet, NSString;

@interface CDMConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs;
@property (readonly, nonatomic) NSString *defaultLocaleIdentifier;
@property (readonly, nonatomic) unsigned int maxConcurrentCount;

+ (id)defaultEnabledServiceGraph;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaxConcurrentCount:(unsigned int)a0;

@end
