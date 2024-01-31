@class NSNumber, NSString, NSURL;

@interface FBKSPendingConsent : NSObject

@property (readonly, nonatomic) NSNumber *ID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *bodyText;
@property (readonly, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) NSURL *learnMoreURL;
@property (readonly, nonatomic) NSString *agreeButtonText;
@property (readonly, nonatomic) NSString *declineButtonText;
@property (readonly, nonatomic) BOOL isRequired;
@property (readonly, nonatomic) NSString *consentTypeString;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
