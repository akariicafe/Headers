@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin : CSLanguageCodeUpdateMonitor {
    NSString *_currentLanguageCode;
}

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withLanguageCode:(id)a1;
- (void)notifySiriLanguageCodeChanged:(id)a0;
- (void)_didReceiveLanguageCodeUpdate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLanguageCodeCurrent:(id)a0;

@end
