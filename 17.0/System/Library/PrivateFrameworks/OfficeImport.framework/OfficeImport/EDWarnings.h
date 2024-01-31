@class NSMutableArray;

@interface EDWarnings : NSObject {
    NSMutableArray *mWarnings;
}

- (void).cxx_destruct;
- (void)addWarning:(id)a0;
- (void)reportWarningsWithAssociatedObject:(id)a0;

@end
