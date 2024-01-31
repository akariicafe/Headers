@class CMIndoorOutdoorManagerInternal;
@protocol CMIndoorOutdoorDelegate;

@interface CMIndoorOutdoorManager : NSObject {
    CMIndoorOutdoorManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMIndoorOutdoorDelegate> delegate;

+ (BOOL)isIndoorOutdoorStateAvailable;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)lastKnownIndoorOutdoorStateWithHandler:(id /* block */)a0;
- (void)startIndoorOutdoorUpdates;
- (void)stopIndoorOutdoorUpdates;

@end
