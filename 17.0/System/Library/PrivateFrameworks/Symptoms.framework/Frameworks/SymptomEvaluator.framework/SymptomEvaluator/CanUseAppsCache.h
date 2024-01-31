@class NSMutableDictionary;

@interface CanUseAppsCache : NSObject {
    NSMutableDictionary *cache;
    BOOL disabled;
}

+ (BOOL)makeVerdictFromRationaleCode:(int)a0;

- (void)enable;
- (id)init;
- (void)disable;
- (id)description;
- (void).cxx_destruct;
- (id)_makeKeyFrom:(id)a0 state:(long long)a1;
- (BOOL)hasEntryFor:(id)a0 state:(long long)a1 rationaleCode:(int *)a2;
- (void)insertEntryFor:(id)a0 state:(long long)a1 rationaleCode:(int)a2;

@end
