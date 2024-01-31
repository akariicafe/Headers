@interface AppleTypeCRetimerDFUChecker : AppleTypeCRetimerUpdaterHelper {
    BOOL _forceDFU;
}

- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)doCheck;
- (BOOL)doCheckForRouterID:(unsigned char)a0;
- (void)initForceDFU;
- (BOOL)waitForACEsWithRouterIDs:(id)a0;

@end
