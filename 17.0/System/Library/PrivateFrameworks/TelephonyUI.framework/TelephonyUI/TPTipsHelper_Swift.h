@interface TPTipsHelper_Swift : NSObject {
    void /* unknown type, empty encoding */ entries;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ didSetup;
}

@property (class, nonatomic, readonly) TPTipsHelper_Swift *shared;

@property (nonatomic, retain) void /* unknown type, empty encoding */ popoverController;

+ (void)donateEventCalledNonContact;
+ (void)donateEventCalledNonFavContact;
+ (void)donateEventKnownCallersDone;
+ (void)donateEventKnownStoryLaunched;
+ (void)donateEventOriginatedCallWithSiri;
+ (void)donateEventSavedNumber;
+ (void)donateEventSpeakerUsed;

- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end
