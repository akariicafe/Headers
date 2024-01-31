@class NSString;

@interface WBSContentBlockerStatisticsFirstParty : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) double lastSeen;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomain:(id)a0 lastSeen:(double)a1;

@end
