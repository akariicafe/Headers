@class NSMutableSet;

@interface DTKPKDebugCodeSet : NSObject

@property (readonly, retain, nonatomic) NSMutableSet *kdebugCodes;

+ (void)releaseFilterMask:(char *)a0;
+ (void)releaseKperfFilter:(struct kperf_kdebug_filter { } *)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addClass:(unsigned int)a0;
- (void)addClass:(unsigned int)a0 subclassID:(unsigned int)a1;
- (void)addClass:(unsigned int)a0 subclassID:(unsigned int)a1 code:(unsigned int)a2;
- (void)addCodeSet:(id)a0;
- (void)addCodes:(id)a0;
- (BOOL)containsClass:(unsigned int)a0;
- (BOOL)containsClass:(unsigned int)a0 subclassID:(unsigned int)a1;
- (void)convertLegacyCodes;
- (char *)createFilterMask:(BOOL)a0;
- (struct kperf_kdebug_filter { } *)createKperfFilter;
- (id)initWithCodes:(id)a0;
- (id)initWithLegacyCodes:(id)a0;
- (id)legacyXML;

@end
