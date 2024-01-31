@interface ATXContextualEngine : NSObject {
    void /* unknown type, empty encoding */ contextStore;
    void /* unknown type, empty encoding */ suggestionStore;
    void /* unknown type, empty encoding */ suggestionServer;
    void /* unknown type, empty encoding */ internalServer;
}

@property (class, nonatomic, readonly) ATXContextualEngine *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)donateRerankedBlendingSuggestions:(id)a0;

@end
