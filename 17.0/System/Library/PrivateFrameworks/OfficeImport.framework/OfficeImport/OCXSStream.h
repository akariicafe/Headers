@class NSMutableArray;

@interface OCXSStream : NSObject {
    NSMutableArray *mLevelStack;
}

- (id)init;
- (void).cxx_destruct;
- (void)pushLevel:(int)a0 name:(const char *)a1;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (BOOL)hasLevels;
- (BOOL)popLevel;

@end
