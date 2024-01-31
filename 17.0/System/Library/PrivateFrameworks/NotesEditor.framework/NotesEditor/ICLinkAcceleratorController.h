@interface ICLinkAcceleratorController : NSObject {
    void /* unknown type, empty encoding */ acceleratorChar;
    void /* unknown type, empty encoding */ numTimesAcceleratorCharMustBeTyped;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ maxCharactersTyped;
    void /* unknown type, empty encoding */ needToWaitUntilUpdateBoundsToAppear;
    void /* unknown type, empty encoding */ currentSuggestionRange;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ linkDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ isShowing;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleArrowDown;
- (void)hideAccelerator;
- (void)didSelectAutocompleteItem:(id)a0;
- (BOOL)handleArrowUp;
- (BOOL)handleUseCurrentSuggestion;
- (id)initWithCloudConfiguration:(id)a0 mode:(long long)a1;
- (void)presentLinkAcceleratorIfNecessaryWithCompletionHandler:(void (^)(void))a0;
- (void)updateAcceleratorOriginWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
