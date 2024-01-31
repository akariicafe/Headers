@interface SBFTestUtilities : NSObject

@property (class, readonly, nonatomic, getter=isRunningXCTest) BOOL runningXCTest;

@end
