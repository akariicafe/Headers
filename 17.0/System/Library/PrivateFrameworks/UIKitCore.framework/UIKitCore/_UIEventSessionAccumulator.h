@class NSString, NSDictionary, NSMutableOrderedSet;

@interface _UIEventSessionAccumulator : NSObject {
    NSMutableOrderedSet *_recentActions;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } depthRange;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSDictionary *allowedActionSourceTypes;
@property (nonatomic) long long sequenceNumber;

+ (id)accumulatorWithName:(id)a0 depthRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2 allowedActionSourceTypes:(id)a3;

- (void)reset;
- (void)increaseWithAction:(id)a0;
- (void)enumerateAnalytics:(id /* block */)a0;
- (void).cxx_destruct;
- (void)flushAccumulator;
- (BOOL)isActionAllowed:(id)a0;
- (void)performIncreaseWithActions:(id)a0;

@end
