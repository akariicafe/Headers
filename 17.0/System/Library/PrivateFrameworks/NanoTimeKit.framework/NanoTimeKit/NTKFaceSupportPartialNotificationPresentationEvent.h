@class NSString, NSDate;

@interface NTKFaceSupportPartialNotificationPresentationEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *pushDate;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)presentationEventWithStatus:(long long)a0 artworkUsed:(long long)a1 errorCode:(long long)a2 optOutStatus:(long long)a3;
- (id)initWithIdentifier:(id)a0 pushDate:(id)a1;

@end
