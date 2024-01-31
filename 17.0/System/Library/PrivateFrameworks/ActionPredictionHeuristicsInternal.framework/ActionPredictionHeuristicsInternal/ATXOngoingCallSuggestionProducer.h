@protocol ATXContextHeuristicsEnvironment;

@interface ATXOngoingCallSuggestionProducer : NSObject {
    id<ATXContextHeuristicsEnvironment> _environment;
}

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id)suggestionWithContact:(id)a0 score:(double)a1;
- (id)suggestionsForOngoingCall:(id)a0;

@end
