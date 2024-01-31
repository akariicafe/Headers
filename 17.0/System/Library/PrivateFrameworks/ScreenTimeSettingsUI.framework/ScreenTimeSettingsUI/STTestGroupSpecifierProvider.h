@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}

@property (retain, nonatomic) NSTimer *timer;

- (id)init;
- (void)setIsHidden:(BOOL)a0;
- (void)dealloc;
- (void)timerFired:(id)a0;
- (BOOL)isHidden;
- (void).cxx_destruct;

@end
