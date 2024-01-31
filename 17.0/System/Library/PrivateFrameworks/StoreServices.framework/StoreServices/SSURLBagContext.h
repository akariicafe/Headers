@class NSString, NSDictionary, NSData, NSMutableDictionary, NSNumber, NSLock;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_httpHeaders;
    NSLock *_lock;
}

@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL allowsExpiredBags;
@property (retain, nonatomic) NSData *clientAuditTokenData;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (nonatomic) BOOL usesCachedBagsOnly;
@property (nonatomic) long long allowedRetryCount;
@property (nonatomic) long long bagType;
@property (readonly, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL ignoresCaches;
@property (retain, nonatomic) NSNumber *userIdentifier;
@property (copy, nonatomic) NSDictionary *allHTTPHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextWithBagType:(long long)a0;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;
- (void)dealloc;
- (id)_init;
- (id)initWithXPCEncoding:(id)a0;
- (id)valueForHTTPHeaderField:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
