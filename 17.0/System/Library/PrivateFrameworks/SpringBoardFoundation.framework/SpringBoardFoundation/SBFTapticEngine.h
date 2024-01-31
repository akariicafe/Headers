@class NSObject, _UITapticEngine, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SBFTapticEngine : NSObject {
    _UITapticEngine *_tapticEngine;
    NSMutableSet *_previewReasons;
    NSMutableSet *_commitReasons;
    NSMutableSet *_cancelledReasons;
    NSObject<OS_dispatch_queue> *_previewReasonsQueue;
    NSObject<OS_dispatch_queue> *_commitReasonsQueue;
    NSObject<OS_dispatch_queue> *_cancelledReasonsQueue;
}

@property (readonly, nonatomic) BOOL supportsFeedbackActuation;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)actuateFeedback:(long long)a0;
- (void)coolDownForFeedback:(unsigned long long)a0 withReason:(id)a1;
- (void)warmUpForFeedback:(unsigned long long)a0 withReason:(id)a1;

@end
