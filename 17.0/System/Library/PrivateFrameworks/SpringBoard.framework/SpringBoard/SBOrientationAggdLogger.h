@class NSString, FBSDisplayLayoutMonitor, NSArray;

@interface SBOrientationAggdLogger : NSObject <FBSDisplayLayoutObserver> {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    long long _currentOrientation;
    unsigned long long _currentOrientationStartTime;
    NSArray *_currentElements;
    BOOL _isKeyboardOnScreen;
    unsigned long long _keyboardOnScreenStartTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_saveOrientationLockAggdValues;
- (void)_keyboardDidShow:(id)a0;
- (void)_orientationLockChanged:(id)a0;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)_keyboardWillHide:(id)a0;
- (double)_bucketedElapsedTimeWithStartTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_noteSignificantTimeChanged:(id)a0;

@end
