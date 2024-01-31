@class NSData, NSURL, NSString;

@interface BLTHashCacheItem : NSObject {
    NSData *_MD5;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *identifier;

+ (id)hashCacheItemWithData:(id)a0 URL:(id)a1 identifier:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (id)MD5;
- (id)initWithURL:(id)a0 data:(id)a1 identifier:(id)a2;

@end
