@class NSString, BBObserver;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate> {
    BBObserver *_bbObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2 playLightsAndSirens:(BOOL)a3 withReply:(id /* block */)a4;

@end
