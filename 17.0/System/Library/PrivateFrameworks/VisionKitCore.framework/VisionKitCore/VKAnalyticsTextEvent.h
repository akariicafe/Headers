@interface VKAnalyticsTextEvent : VKAnalyticsEvent

@property (nonatomic) long long source;
@property (nonatomic) long long textEventType;
@property (nonatomic) unsigned long long selectionLength;
@property (nonatomic) unsigned long long selectionWordCount;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) BOOL includesRichPasteboardContent;
@property (nonatomic) SEL macOSKBNavigationSelector;
@property (readonly, nonatomic) long long eventType;

- (id)description;
- (id)coreAnalyticsDictionary;
- (id)eventKey;
- (long long)type;
- (id)initWithSelectionLength:(unsigned long long)a0 totalLength:(unsigned long long)a1 selectionWordCount:(unsigned long long)a2 macOSSelector:(SEL)a3 includesRichPasteBoardContent:(BOOL)a4 eventType:(long long)a5 source:(long long)a6 customIdentifier:(id)a7;

@end
