@class NSArray, FCEdgeCacheHint, NSObject;
@protocol NSCopying;

@interface FCFeedPrewarmRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSObject<NSCopying> *requestKey;
@property (readonly, copy, nonatomic) NSArray *feedRequests;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestKey:(id)a0 feedRequests:(id)a1 options:(long long)a2 edgeCacheHint:(id)a3;

@end
