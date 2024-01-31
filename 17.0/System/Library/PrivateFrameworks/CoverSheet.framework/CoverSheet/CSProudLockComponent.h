@interface CSProudLockComponent : CSComponent

@property (nonatomic) long long optOutOfAlphaFadesForPageScroll;
@property (nonatomic) BOOL shouldResideInALowerSubview;
@property (nonatomic) BOOL prefersInlineCoaching;

- (id)init;
- (id)prefersInlineCoaching:(BOOL)a0;
- (id)optOutOfAlphaFadesForPageScroll:(long long)a0;
- (id)shouldResideInALowerSubview:(BOOL)a0;

@end
