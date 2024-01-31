@class NSNumber, NSString;

@interface WatchSportsEventIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *isEntitledToPlayOnDevice;
@property (nonatomic, copy) NSString *playablePunchoutUrl;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) NSNumber *isAppInstalled;
@property (nonatomic, copy) NSString *appStorePunchoutUrl;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
