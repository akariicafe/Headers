@interface PHClientLinkedAgainst : NSObject

@property (readonly, nonatomic) BOOL clientLinkedOnOrAfterFall2023OSVersions;

- (id)initWithXPCDict:(id)a0;
- (id)init;
- (void)encodeToXPCDict:(id)a0;

@end
