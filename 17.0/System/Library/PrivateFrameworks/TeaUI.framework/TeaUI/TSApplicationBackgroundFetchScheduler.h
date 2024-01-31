@interface TSApplicationBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void /* unknown type, empty encoding */ application;
}

- (id)init;
- (void)setMinimumBackgroundFetchInterval:(double)a0;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)prepareForUseWithApplicationDelegate:(id)a0;

@end
