@interface ATXChinSuggestionRequest : NSObject

@property (nonatomic) unsigned long long debugIdentifier;
@property (readonly, nonatomic) id /* block */ acceptedBlock;
@property (readonly, nonatomic) id /* block */ rejectedBlock;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAcceptedBlock:(id /* block */)a0 rejectedBlock:(id /* block */)a1;

@end
