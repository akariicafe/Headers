@class NSMutableString, NSMutableDictionary, CSSearchableItemAttributeSet;

@interface CMIndexingState : CMState

@property (retain) NSMutableDictionary *metadata;
@property (retain, nonatomic) CSSearchableItemAttributeSet *searchableAttributes;
@property (retain) NSMutableString *textContent;

- (id)init;
- (void).cxx_destruct;

@end
