@class CHQuery, NSString;

@interface PKDetectionQuery : PKQuery <CHQueryDelegate>

@property (retain, nonatomic) CHQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)dealloc;
- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (void)queryDidUpdateResult:(id)a0;

@end
