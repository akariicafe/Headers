@class NSDictionary, NSMutableDictionary, NSMapTable;
@protocol WDUserActivityResponder;

@interface _WDActivityNode : NSObject {
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
}

@property (weak, nonatomic) id<WDUserActivityResponder> responder;
@property (weak, nonatomic) id<WDUserActivityResponder> nextResponder;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResponder:(id)a0;
- (id)_nextNode;
- (void)addActivitiesToArray:(id)a0 currentNode:(id)a1;
- (id)changeActivityForResponder:(id)a0 activityDictionary:(id)a1;
- (id)transitionActivityForResponder:(id)a0 newResponder:(id)a1 transitionDictionary:(id)a2;

@end
