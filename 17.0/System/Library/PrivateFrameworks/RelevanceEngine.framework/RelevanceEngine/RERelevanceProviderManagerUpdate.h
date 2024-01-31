@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {
    RERelevanceProvider *_provider;
}

@property (readonly, nonatomic) RERelevanceProvider *provider;
@property (readonly, nonatomic) BOOL allProviders;
@property (copy, nonatomic) id /* block */ completion;

+ (id)immediateUpdateForAllProviders;
+ (id)immediateUpdateForProvider:(id)a0;
+ (id)scheduledUpdateForAllProvidersAtDate:(id)a0;
+ (id)scheduledUpdateForProvider:(id)a0 atDate:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
