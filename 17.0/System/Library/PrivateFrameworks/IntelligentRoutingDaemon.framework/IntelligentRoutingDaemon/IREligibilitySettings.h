@class NSNumber;

@interface IREligibilitySettings : NSObject

@property (retain, nonatomic) NSNumber *upRankToOneTapThr;
@property (retain, nonatomic) NSNumber *uprankToAutorouteThr;
@property (retain, nonatomic) NSNumber *downrankToNoneThr;
@property (retain, nonatomic) NSNumber *downrankToNoneWithIgnoringThr;
@property (retain, nonatomic) NSNumber *downrankToOneTapThr;
@property (retain, nonatomic) NSNumber *initialStateIsOneTap;

- (void).cxx_destruct;

@end
