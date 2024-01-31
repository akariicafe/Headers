@class TUCallProvider;

@interface DDCallKitAction : DDCallAction

@property (retain) TUCallProvider *callProvider;

+ (id)callKitProviders;
+ (BOOL)hostApplicationIsEntitled;

- (id)subtitle;
- (id)localizedName;
- (void).cxx_destruct;
- (long long)TTYType;
- (id)dialRequest;

@end
