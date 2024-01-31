@class NSDictionary, NSSet;

@interface _UISceneConnectionOptionsContext : NSObject {
    NSSet *_cleanupBlocks;
}

@property (retain, nonatomic) NSDictionary *launchOptionsDictionary;
@property (retain, nonatomic) NSSet *unprocessedActions;

- (void).cxx_destruct;

@end
