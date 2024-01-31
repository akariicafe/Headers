@class NSArray, NSString;

@interface SFSiriDeviceSetupGreetingDetails : NSObject

@property (copy, nonatomic) NSArray *introWordTimings;
@property (copy, nonatomic) NSString *dialogAText;
@property (copy, nonatomic) NSArray *dialogAWordTimings;
@property (copy, nonatomic) NSArray *dialogBPhraseTimings;
@property (copy, nonatomic) NSArray *dialogCPhraseTimings;

- (void).cxx_destruct;

@end
