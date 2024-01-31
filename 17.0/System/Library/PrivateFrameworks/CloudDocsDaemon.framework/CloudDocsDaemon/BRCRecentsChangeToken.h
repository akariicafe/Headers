@interface BRCRecentsChangeToken : NSObject

@property (nonatomic) unsigned long long notifRank;
@property (nonatomic) unsigned long long databaseID;

+ (BOOL)supportsSecureCoding;
+ (id)changeTokenFromData:(id)a0;

- (id)description;
- (id)toData;

@end
