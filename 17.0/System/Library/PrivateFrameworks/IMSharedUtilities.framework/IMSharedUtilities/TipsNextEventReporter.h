@interface TipsNextEventReporter : NSObject {
    void /* unknown type, empty encoding */ appBundleId;
    void /* unknown type, empty encoding */ logger;
}

@property (class, nonatomic, readonly) TipsNextEventReporter *shared;

- (id)init;
- (void).cxx_destruct;
- (void)donateReceivedPhotoEventWatch;
- (void)donateSavedPhotoEventWatch;
- (void)donateSentINSendMessageIntentEvent;
- (void)donateSentMessageEvent;
- (void)donateSentSetNameAndPhotoProfileEvent;
- (void)donateSentTapbackEventWatch;

@end
