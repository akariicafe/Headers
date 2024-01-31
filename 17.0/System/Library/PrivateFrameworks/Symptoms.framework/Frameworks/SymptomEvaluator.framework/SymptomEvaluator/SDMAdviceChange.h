@class NSString, NSMutableArray;

@interface SDMAdviceChange : NSObject

@property (retain, nonatomic) NSString *adviceInitiatingNames;
@property (nonatomic) unsigned int previousAdvice;
@property (nonatomic) unsigned int newAdvice;
@property (nonatomic) unsigned long long previousAdviceCause;
@property (nonatomic) unsigned long long previousAdviceInitialCause;
@property (nonatomic) unsigned long long newAdviceCause;
@property (nonatomic) unsigned long long previousAdviceDuration;
@property (nonatomic) unsigned long long dlPriorThroughputBps;
@property (nonatomic) unsigned long long ulPriorThroughputBps;
@property (nonatomic) unsigned long long dlSubsequentThroughputBps;
@property (nonatomic) unsigned long long ulSubsequentThroughputBps;
@property (nonatomic) BOOL previousScreenIsDark;
@property (nonatomic) BOOL previousScreenIsLocked;
@property (nonatomic) BOOL newScreenIsDark;
@property (nonatomic) BOOL newScreenIsLocked;
@property (retain, nonatomic) NSMutableArray *previousAdviceParticipants;

- (id)init;
- (void).cxx_destruct;

@end
