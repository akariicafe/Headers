@class GDPersonEntityTagEventIDSet;

@interface GDPersonEntityTaggingStatefulFeedback : NSObject

@property (readonly, nonatomic) long long feedbackType;
@property (readonly, nonatomic) GDPersonEntityTagEventIDSet *eventIds;

- (void).cxx_destruct;
- (id)initWithStatefulFeedbackType:(long long)a0 eventIds:(id)a1;

@end
