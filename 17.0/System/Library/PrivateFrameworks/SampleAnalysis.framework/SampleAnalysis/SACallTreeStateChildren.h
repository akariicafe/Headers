@class NSArray;

@interface SACallTreeStateChildren : SACallTreeNode {
    int _onBehalfOfPid;
    NSArray *_timeRanges;
    NSArray *_ioEvents;
}

- (void).cxx_destruct;

@end
