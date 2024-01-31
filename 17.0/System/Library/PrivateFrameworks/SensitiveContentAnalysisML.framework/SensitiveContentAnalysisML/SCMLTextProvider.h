@interface SCMLTextProvider : NSObject

@property (class, retain) SCMLTextProvider *defaultTextProvider;

- (void)provideTextItemsWithConversationIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 progressHandler:(id /* block */)a3;

@end
