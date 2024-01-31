@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme;

+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (void)dealloc;
- (unsigned long long)status;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
