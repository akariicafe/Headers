@class NSString, NSError;

@interface MRMigrationBehaviorResult : NSObject

@property (retain, nonatomic) NSString *sourceUID;
@property (retain, nonatomic) NSString *destinationUID;
@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSError *error;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;

@end
