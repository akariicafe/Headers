@class HKDisplayType;

@interface _HKRemoteDisplayTypeConfiguration : NSObject

@property (readonly, nonatomic) long long initialTimeScope;
@property (readonly, nonatomic) HKDisplayType *remoteDisplayType;

- (void).cxx_destruct;
- (id)initWithInitialTimeScope:(long long)a0 remoteDisplayType:(id)a1;

@end
