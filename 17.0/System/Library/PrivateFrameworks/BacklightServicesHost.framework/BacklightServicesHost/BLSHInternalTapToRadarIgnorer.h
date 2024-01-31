@interface BLSHInternalTapToRadarIgnorer : NSObject

+ (id)_defaults;
+ (id)_ignoredDesignations;
+ (BOOL)hasIgnoredDesignations;
+ (void)ignoreRadarDesignation:(unsigned long long)a0;
+ (void)resetIgnoredDesignations;
+ (BOOL)shouldIgnoreDesignation:(unsigned long long)a0;

@end
