@class NSString, NSDate;

@interface SBINAppIntentSystemContext : NSObject <BSDescriptionStreamable>

@property (readonly, nonatomic) NSDate *preciseTimestamp;
@property (readonly, nonatomic) unsigned long long actionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPreciseTimestamp:(id)a0 actionSource:(unsigned long long)a1;

@end
