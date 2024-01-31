@class NSString;

@interface ESLocalDBWatcherCalConcernedParty : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id concernedParty;
@property (readonly, nonatomic) NSString *accountID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithConcernedParty:(id)a0 accountID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
