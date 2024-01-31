@interface ICNavigationItemConfiguration : NSObject

@property (nonatomic) unsigned long long lastUpdateHash;
@property (readonly, nonatomic) BOOL needsUpdate;

- (id)init;
- (void)reset;
- (BOOL)updateAnimated:(BOOL)a0;

@end
