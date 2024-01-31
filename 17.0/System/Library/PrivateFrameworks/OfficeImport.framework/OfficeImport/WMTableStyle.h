@class WDTableProperties;

@interface WMTableStyle : WMStyle {
    WDTableProperties *mWdTableProperties;
}

- (void).cxx_destruct;
- (void)addTableProperties:(id)a0;
- (id)initWithWDTableProperties:(id)a0;

@end
