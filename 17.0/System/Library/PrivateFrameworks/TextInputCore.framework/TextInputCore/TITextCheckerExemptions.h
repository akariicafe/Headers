@interface TITextCheckerExemptions : NSObject {
    BOOL _assertsObservers;
}

@property (nonatomic) BOOL assertsObservers;

- (void)dealloc;
- (BOOL)stringIsExemptFromChecker:(id)a0;

@end
