@class NSDateInterval;

@interface ATXContextWebsiteSuggestionProducer : NSObject {
    NSDateInterval *_validDateInterval;
    double _score;
    long long _reasonCode;
}

- (void).cxx_destruct;
- (id)_suggestionWithWebsite:(id)a0 titlesAndSubtitles:(id)a1;
- (id)initWithValidDateInterval:(id)a0 reasonCode:(long long)a1 score:(double)a2;
- (id)titleAndSubtitleForUrl:(id)a0 titlesAndSubtitles:(id)a1;
- (id)websiteSuggestions;

@end
