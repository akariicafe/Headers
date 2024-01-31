@interface CMMagicMountManager : NSObject {
    id _internal;
}

@property (readonly, nonatomic) struct CMMagicMountStateStruct { double x0; long long x1; } currentMagicMountState;
@property (nonatomic) long long magicMountConfiguration;

+ (BOOL)isAvailable;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)deallocPrivate;
- (void)feedMountStatus:(long long)a0 apAwake:(BOOL)a1 simulated:(BOOL)a2 timestamp:(double)a3;
- (void)onMagicMountData:(const struct MagicMountState { double x0; unsigned char x1; BOOL x2; BOOL x3; } *)a0;
- (void)sendMagicMountStateToClientPrivate;
- (void)setAPWakesAllowed:(BOOL)a0;
- (void)setAPWakesAllowedPrivate:(BOOL)a0;
- (void)simulateMagicMountEvent:(long long)a0 delay:(double)a1;
- (void)startMagicMountUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startMagicMountUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopMagicMountUpdates;
- (void)stopMagicMountUpdatesPrivate;

@end
