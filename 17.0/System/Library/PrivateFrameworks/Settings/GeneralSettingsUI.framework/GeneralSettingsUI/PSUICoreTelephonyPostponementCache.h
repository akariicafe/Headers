@class NSString, CTActivationPolicyState, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyPostponementCache : NSObject <CoreTelephonyClientSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) CTActivationPolicyState *activationPolicyState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)fetchActivationPolicyState;
- (id)getActivationPolicyState;

@end
