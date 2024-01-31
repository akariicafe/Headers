@class NSString, NSDate;

@interface GKPlayerActivitySpecialItemInternal : GKInternalRepresentation

@property (nonatomic) long long activityType;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *alternateMessage;
@property (retain, nonatomic) NSString *sfSymbol;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)secureCodedPropertyKeys;
+ (id)constantToTypeMap;
+ (id)typeToConstantMap;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
