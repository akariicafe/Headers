@class NSString, NSMutableDictionary;

@interface WAMessageAWD : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *mutableFields;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL isRootMessage;
@property (readonly, nonatomic) NSString *originalClassName;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long metricID;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)fieldForKey:(id)a0;
- (void)addField:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setUuid:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKey:(id)a0 andFields:(id)a1 isRootMessage:(BOOL)a2 originalClassName:(id)a3 uuid:(id)a4;
- (void)setIsRootMessage:(BOOL)a0;
- (void)setMetricID:(unsigned long long)a0;
- (void)setMutableFields:(id)a0;
- (void)setOriginalClassName:(id)a0;

@end
