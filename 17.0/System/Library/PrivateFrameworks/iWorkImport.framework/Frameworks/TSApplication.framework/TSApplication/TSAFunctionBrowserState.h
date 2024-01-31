@class NSMutableArray;

@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    unsigned short mCurrentFunction;
}

- (BOOL)canGoBack;
- (id)initWithContext:(id)a0;
- (BOOL)canGoForward;
- (unsigned short)forward;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned short)back;
- (unsigned short)currentFunction;
- (id)recentFunctions;
- (id)allBackFunctions;
- (id)allForwardFunctions;
- (unsigned short)backByAmount:(unsigned long long)a0;
- (unsigned short)forwardByAmount:(unsigned long long)a0;
- (void)p_filterOutUnknownFunctions:(id)a0;
- (void)recordNavigationTo:(unsigned short)a0;
- (void)recordRecentFunction:(unsigned short)a0;

@end
