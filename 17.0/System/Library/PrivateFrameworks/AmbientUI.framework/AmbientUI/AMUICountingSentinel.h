@class NSString, NSMutableArray;

@interface AMUICountingSentinel : NSObject <BSDescriptionStreamable> {
    long long _counter;
    NSMutableArray *_deferredBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
