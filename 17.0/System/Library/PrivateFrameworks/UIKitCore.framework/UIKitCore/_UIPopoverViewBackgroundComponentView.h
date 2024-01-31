@class NSString, NSMutableArray;

@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSMutableArray *_replicants;
}

@property (copy, nonatomic) NSString *directionSelector;

- (id)replicate;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void).cxx_destruct;
- (id)_newReplicant;
- (void)updateReplicants;

@end
