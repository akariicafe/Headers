@interface CHSMutableEntitlementCollection : CHSEntitlementCollection

@property (nonatomic) BOOL usesEventService;
@property (nonatomic) BOOL canOpenSystemURLs;
@property (nonatomic) BOOL canKeepAlive;

- (void)setCanKeepAlive:(BOOL)a0;
- (void)setCanOpenSystemURLs:(BOOL)a0;
- (void)setUsesEventService:(BOOL)a0;

@end
