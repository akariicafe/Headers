@interface SNPlatformUtils : NSObject

+ (id)acousticIDForLocalHost;
+ (id)tuningPathForTuningPrefix:(id)a0 error:(id *)a1;
+ (id)tuningPrefixForLocalHost;
+ (id)tuningPrefixForProductType:(int)a0 acousticID:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
