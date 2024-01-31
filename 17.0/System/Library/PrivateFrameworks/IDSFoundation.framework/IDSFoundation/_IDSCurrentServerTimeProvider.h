@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>

@property (readonly, nonatomic) id apsConnection;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)serverTimeInNanoSeconds;
- (BOOL)isAccurate;

@end
