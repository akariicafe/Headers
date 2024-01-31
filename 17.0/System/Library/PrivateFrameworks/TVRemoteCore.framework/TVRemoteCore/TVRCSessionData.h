@class NSString, NSDate;

@interface TVRCSessionData : NSObject

@property (retain, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) BOOL usedRTI;
@property (nonatomic) BOOL usedSiri;
@property (nonatomic) BOOL requiredPairing;
@property (nonatomic) BOOL directionalControlsEnabled;
@property (copy, nonatomic) NSString *launchContextDesc;

- (void).cxx_destruct;

@end
