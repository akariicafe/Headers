@interface WFActionViewModel : NSObject <WFActionEventObserver, WFParameterEventObserver> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ visibleParameters;
    void /* unknown type, empty encoding */ parameterSummary;
    void /* unknown type, empty encoding */ additionalParameterSummaries;
    void /* unknown type, empty encoding */ showMoreParameters;
    void /* unknown type, empty encoding */ _isFavorite;
    void /* unknown type, empty encoding */ _isExpanded;
    void /* unknown type, empty encoding */ _showOutput;
    void /* unknown type, empty encoding */ _resourceError;
    void /* unknown type, empty encoding */ _accessResourcesThatCanLogOut;
    void /* unknown type, empty encoding */ _accessResourcesAllowingMultipleAccounts;
    void /* unknown type, empty encoding */ onParameterStateChange;
    void /* unknown type, empty encoding */ onVisibleParametersChange;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)actionIconDidChange:(id)a0;
- (void)actionNameDidChange:(id)a0;
- (void)actionOutputDetailsDidChange:(id)a0;
- (void)actionReloadAuxiliaryButton:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)favoritesDidChange;
- (void)pasteboardDidChange;
- (void)resourcesDidChange:(id)a0;

@end
