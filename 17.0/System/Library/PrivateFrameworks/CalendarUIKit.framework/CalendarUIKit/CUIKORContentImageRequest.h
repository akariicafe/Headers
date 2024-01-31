@class CUIKOROccurrenceState;

@interface CUIKORContentImageRequest : NSObject

@property (readonly, nonatomic) long long requestId;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) CUIKOROccurrenceState *state;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithId:(long long)a0 options:(unsigned long long)a1 state:(id)a2 resultHandler:(id /* block */)a3;

@end
