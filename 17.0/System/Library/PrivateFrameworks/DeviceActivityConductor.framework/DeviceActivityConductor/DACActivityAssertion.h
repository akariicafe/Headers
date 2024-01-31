@class DACActivityDescriptor, DACChangeMarker;

@interface DACActivityAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) DACActivityDescriptor *origin;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ relinquishHandler;
@property (readonly, nonatomic) DACChangeMarker *changeMarker;
@property (readonly, nonatomic) DACActivityDescriptor *activity;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)_initWithActivity:(id)a0 requester:(id)a1 changeMarker:(id)a2 relinquishHandler:(id /* block */)a3;

@end
