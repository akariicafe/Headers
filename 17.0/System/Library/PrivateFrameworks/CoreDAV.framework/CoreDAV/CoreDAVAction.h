@interface CoreDAVAction : NSObject <CoreDAVChangeContextHolding>

@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) id context;
@property (retain, nonatomic) id changeContext;
@property (nonatomic) BOOL ignoresGuardianRestrictions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAction:(int)a0 context:(id)a1;

@end
