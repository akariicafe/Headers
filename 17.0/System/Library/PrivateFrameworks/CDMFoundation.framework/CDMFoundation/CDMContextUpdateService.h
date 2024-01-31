@class NSString;

@interface CDMContextUpdateService : CDMDAGBaseService {
    NSString *locale;
}

+ (BOOL)isEnabled;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)doCoreAnalyticsForContextUpdateOutcome:(int)a0 numTurnsRollback:(int)a1 locale:(id)a2;
- (id)handleRequestCommandTypeNames;

@end
