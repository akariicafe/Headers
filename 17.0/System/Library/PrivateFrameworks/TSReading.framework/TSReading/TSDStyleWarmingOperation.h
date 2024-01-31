@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}

- (void)main;
- (id)initWithStyle:(id)a0 property:(int)a1 accessController:(id)a2;
- (void)warm;

@end
