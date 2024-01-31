@class NSString;

@interface IDSServiceMonitor : NSObject {
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void)updateAvailability;
- (void)dealloc;
- (id)description;
- (id)initWithService:(id)a0;
- (void)_postAvailability:(long long)a0;
- (long long)serviceAvailability;
- (void).cxx_destruct;
- (void)_updateAvailability;

@end
