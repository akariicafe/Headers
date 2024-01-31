@interface SXVideoQuartileEvent : SXMediaEvent

@property (readonly, nonatomic) unsigned long long quartile;

- (id)initWithQuartile:(unsigned long long)a0;

@end
