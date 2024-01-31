@class NSArray, NSError;

@interface ATXAmbientSuggestionProvider : NSObject <ContextualSuggestionClient.AmbientConfigurationManagerObserver> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ suggestionProvider;
    void /* unknown type, empty encoding */ descriptorProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logger;
    void /* unknown type, empty encoding */ debugRotationNotificationToken;
    void /* unknown type, empty encoding */ _suggestionsWidgetSuggestions;
    void /* unknown type, empty encoding */ shouldDisableSuppressionTimerForTooling;
    void /* unknown type, empty encoding */ refreshTimer;
}

@property (nonatomic, readonly) NSArray *stackSuggestions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)readStacksWithCompletion:(void (^)(NSArray *, NSError *))a0;
- (void)logUserDidTapWidget:(id)a0;
- (void)logViewDidAppear;
- (void)logViewDidDisappear;
- (void)logWidgetDidAppear:(id)a0;
- (void)logWidgetDidDisappear:(id)a0;
- (void)logWidgetStack:(id)a0 didChangeToWidget:(id)a1 reason:(unsigned long long)a2;
- (void)writeStacks:(NSArray *)a0 completion:(void (^)(NSError *))a1;
- (void)ambientConfigurationManagerCacheDidUpdate;
- (void)logStackDidChangeToWidget:(id)a0 reason:(unsigned long long)a1;
- (void)logUserDidAddWidget:(id)a0;
- (void)logUserDidAddWidgetStack:(id)a0;
- (void)logUserDidRemoveWidget:(id)a0;
- (void)logUserDidRemoveWidgetStack:(id)a0;

@end
