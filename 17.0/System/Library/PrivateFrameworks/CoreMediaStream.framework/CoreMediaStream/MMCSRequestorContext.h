@class MMCSEngine;

@interface MMCSRequestorContext : NSObject

@property (weak, nonatomic) MMCSEngine *engine;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long *itemIDs;
@property (nonatomic) unsigned int *itemFlags;
@property (nonatomic) char **signatures;
@property (nonatomic) char **authTokens;

+ (id)contextWithEngine:(id)a0 type:(int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEngine:(id)a0 type:(int)a1;

@end
