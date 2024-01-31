@class ATXStackRotationSessionManager, NSMutableArray;

@interface ATXStackSystemSuggestTrackingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXStackRotationSessionManager *sessionManager;
@property (readonly, nonatomic) NSMutableArray *systemSuggestBlendingCaches;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)blendingCacheWithUUID:(id)a0;
- (id)initWithRotationSessionManager:(id)a0 systemSuggestBlendingCaches:(id)a1;
- (BOOL)isEqualToATXStackSystemSuggestTrackingContext:(id)a0;
- (id)removeAllAndReturnCompletedSystemSuggestSessions;
- (void)updateWithBlendingUICacheUpdate:(id)a0;
- (void)updateWithClientModelCacheUpdate:(id)a0;
- (void)updateWithUIEvent:(id)a0;

@end
