@class NSString, NSSet, NSDictionary;

@interface VSAccountChannels : NSObject <NSCopying>

@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSSet *channelIDs;
@property (copy, nonatomic) NSDictionary *providerInfo;

+ (id)deserializationResultWithData:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializationResult;
- (id)serializationResultWithFormat:(unsigned long long)a0;

@end
