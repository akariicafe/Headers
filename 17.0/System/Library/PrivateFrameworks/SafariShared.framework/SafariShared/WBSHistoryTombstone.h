@class NSDictionary, NSString, NSData;

@interface WBSHistoryTombstone : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSData *urlHash;
@property (readonly, nonatomic) NSData *urlSalt;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long generation;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURLString:(id)a0 urlHash:(id)a1 urlSalt:(id)a2 startTime:(double)a3 endTime:(double)a4 generation:(long long)a5;
- (id)initWithSQLiteRow:(id)a0 crypto:(id)a1;
- (BOOL)matchesVisitTime:(double)a0 urlString:(id)a1;
- (id)secureTombstoneWithSalt:(id)a0;

@end
