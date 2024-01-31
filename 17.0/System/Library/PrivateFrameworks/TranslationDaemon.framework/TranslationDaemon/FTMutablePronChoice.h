@class NSString;

@interface FTMutablePronChoice : FTPronChoice

@property (copy, nonatomic) NSString *pron_sequence;
@property (nonatomic) float log_weight;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
