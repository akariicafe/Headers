@class NSString, NSMutableSet;

@interface CMContinuityCaptureState : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableSet *pendingEvents;
@property (copy, nonatomic) id /* block */ entryAction;
@property (copy, nonatomic) id /* block */ exitAction;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 entryAction:(id /* block */)a1 exitAction:(id /* block */)a2;

@end
