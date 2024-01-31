@class NSMutableDictionary, NSMutableArray;

@interface NSISPlaybackOperation : NSObject {
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableArray *variableDelegates;
}

- (id)init;
- (void)dealloc;
- (void)_addToEngine:(id)a0;
- (id)unwrapVariable:(id)a0;
- (void)playbackOneAction:(id)a0 onEngine:(id)a1;
- (id)unwrapLinearExpression:(id)a0 onEngine:(id)a1;

@end
