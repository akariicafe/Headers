@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject

@property (retain, nonatomic) CARAutomaticDNDStatus *DNDStatus;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)outputFromRhodesUtility;

@end
