@interface BCSRealTimeShardSignposter : BCSRealTimeSignposter

@property (readonly, nonatomic) long long shardType;

- (id)_initWithShardType:(long long)a0 signpostIdentifier:(unsigned long long)a1;

@end
