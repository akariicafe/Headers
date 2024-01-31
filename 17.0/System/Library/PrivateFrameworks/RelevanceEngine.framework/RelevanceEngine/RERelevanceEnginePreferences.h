@class NSSet;
@protocol RERelevanceEnginePreferencesDelegate;

@interface RERelevanceEnginePreferences : NSObject <NSCopying> {
    id<RERelevanceEnginePreferencesDelegate> _delegate;
}

@property (weak, nonatomic) id<RERelevanceEnginePreferencesDelegate> delegate;
@property (copy, nonatomic) NSSet *disabledDataSourceIdentifiers;
@property (nonatomic) unsigned long long mode;

+ (id)defaultPreferences;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
