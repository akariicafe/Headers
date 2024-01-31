@class NSMutableArray;

@interface _UITableViewDeleteAnimationSupport : NSObject {
    NSMutableArray *_cellsToDeleteAfterAnimation;
    int _deleteCount;
    unsigned char _enabledStateBeforeDeleteAnimation : 1;
}

- (void).cxx_destruct;

@end
