@class NSDate, FMLHandle;

@interface FMLFriend : NSObject

@property (retain, nonatomic) FMLHandle *handle;
@property (nonatomic) long long handleType;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *expiry;
@property (nonatomic) long long origin;
@property (nonatomic) BOOL originatedFromTheSameClient;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)comparisonIdentifier;
- (id)initWithHandle:(id)a0 handleType:(long long)a1 createDate:(id)a2 expiry:(id)a3 origin:(long long)a4 originatedFromTheSameClient:(BOOL)a5;

@end
