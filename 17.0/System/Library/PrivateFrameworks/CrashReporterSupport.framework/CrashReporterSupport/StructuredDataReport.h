@class NSString;

@interface StructuredDataReport : OSAReport {
    int _log_type;
    NSString *_raw_logfile;
}

- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)dealloc;
- (BOOL)isActionable;
- (id)reportNamePrefix;
- (id)initWithType:(int)a0 withFile:(id)a1;
- (int)streamContentAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)appleCareDetails;
- (void)generateCustomLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)problemType;

@end
