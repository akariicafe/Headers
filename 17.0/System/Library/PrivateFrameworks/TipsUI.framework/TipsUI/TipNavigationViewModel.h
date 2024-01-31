@class NSArray, TPSTip;

@interface TipNavigationViewModel : NSObject {
    void /* unknown type, empty encoding */ _currentTip;
    void /* unknown type, empty encoding */ _tips;
}

@property (nonatomic, retain) TPSTip *currentTip;
@property (nonatomic, copy) NSArray *tips;
@property (nonatomic, readonly) long long currentTipIndex;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoNext;

- (id)init;
- (void)goBack;
- (void).cxx_destruct;
- (void)currentTipDidChangeToTip:(id)a0;
- (void)goNext;
- (void)selectTipAtIndex:(long long)a0;

@end
