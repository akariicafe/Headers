@class NSString, JEUnfairLock;

@interface ASCExponentialBackoff : NSObject <ASCBackoff>

@property (readonly, nonatomic) double baseSleepTimeInterval;
@property (readonly, nonatomic) double maxSleepTimeInterval;
@property (readonly, nonatomic) JEUnfairLock *attemptLock;
@property (nonatomic) long long attemptsMade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
