@class NSString;

@interface MAProgressNotification : NSObject

@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;
@property (retain, nonatomic) NSString *taskDescription;

- (void).cxx_destruct;

@end
