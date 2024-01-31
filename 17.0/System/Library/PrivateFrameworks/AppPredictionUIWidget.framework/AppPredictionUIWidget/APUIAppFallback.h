@class NSString, ATXProactiveSuggestion;

@interface APUIAppFallback : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion;

- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0;
- (id)initWithProactiveSuggestion:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAPUIAppFallback:(id)a0;

@end
