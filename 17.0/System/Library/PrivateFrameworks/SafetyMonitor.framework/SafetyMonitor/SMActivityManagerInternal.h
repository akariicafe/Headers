@interface SMActivityManagerInternal : NSObject {
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ silentAudioFileName;
}

@property (class, nonatomic, readonly) SMActivityManagerInternal *shared;

- (id)init;
- (void)startActivity;
- (void).cxx_destruct;
- (void)endActivities;
- (void)updateActivityWith:(id)a0;

@end
