@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *stopTime;
@property (nonatomic) long long stopReasons;
@property (readonly, nonatomic) NSDate *lastMovieWriteAttemptTime;
@property (readonly, nonatomic) long long movieWriteAttemptsCount;
@property (nonatomic) long long failedStateReadAttemptsCount;

+ (id)secondaryStateWithContentsOfFile:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)writeToFile:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)addStopReasons:(long long)a0 stopTime:(id)a1;
- (void)notifyWillAttemptToWriteMovie;

@end
