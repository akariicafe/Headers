@class NSString;

@interface DNDAvailabilityService : NSObject {
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0;
- (BOOL)isLocalUserAvailableReturningError:(id *)a0;

@end
