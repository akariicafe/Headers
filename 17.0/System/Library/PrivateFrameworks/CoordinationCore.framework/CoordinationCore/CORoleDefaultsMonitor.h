@class NSUserDefaults;
@protocol CORoleDefaultsMonitorDelegate;

@interface CORoleDefaultsMonitor : NSObject

@property (nonatomic) unsigned long long result;
@property (readonly, nonatomic) NSUserDefaults *SoundBoardDefaults;
@property (readonly, weak, nonatomic) id<CORoleDefaultsMonitorDelegate> delegate;

- (void)dealloc;
- (void)_updateState;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_notifyDelegate:(unsigned long long)a0;
- (unsigned long long)_getCurrentResult;

@end
