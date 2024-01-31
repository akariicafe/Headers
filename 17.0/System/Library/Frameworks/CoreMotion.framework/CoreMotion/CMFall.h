@interface CMFall : NSObject

+ (BOOL)areStatsAvailable;

- (unsigned long long)setDataCollectionConfiguration:(unsigned long long)a0;
- (id)fallConfig;
- (id)sendStatsDataToUrl:(id)a0;
- (void)sendStatsDataToUrl:(id)a0 onCompletion:(id /* block */)a1;
- (void)setHgalCaptureMode:(unsigned char)a0;
- (BOOL)setStatsEnabled:(BOOL)a0;
- (void)simulateEvent:(unsigned long long)a0;

@end
