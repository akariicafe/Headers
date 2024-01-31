@interface REAudioManagerNotificationListener : NSObject {
    void *_owner;
}

- (void)stop;
- (id)initWithOwner:(void *)a0;
- (void)sessionInterrupted:(id)a0;
- (void)engineInterrupted:(id)a0;
- (void)servicesReset:(id)a0;

@end
