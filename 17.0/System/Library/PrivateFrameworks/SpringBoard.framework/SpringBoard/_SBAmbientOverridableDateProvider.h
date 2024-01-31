@class NSString, SBFOverridableDateProvider;

@interface _SBAmbientOverridableDateProvider : NSObject <AMUIDateProviding> {
    SBFOverridableDateProvider *_dateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)date;
- (void)removeMinuteUpdateHandler:(id)a0;
- (void).cxx_destruct;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)a0;

@end
