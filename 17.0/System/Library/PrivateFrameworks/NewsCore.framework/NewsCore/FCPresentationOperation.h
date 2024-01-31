@class NSString, NSNumber;

@interface FCPresentationOperation : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long requiredAppLaunchCount;
@property (retain, nonatomic) NSNumber *maxPrecedingSameSessionPresentations;
@property (retain, nonatomic) NSNumber *maxPresentationAttempts;
@property (nonatomic) BOOL endsPresentationSession;
@property (nonatomic) long long suppressOnLaunchConditions;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
