@class Suggestion;

@interface ExecuteSuggestionIntent : INIntent

@property (nonatomic, retain) Suggestion *suggestion;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
