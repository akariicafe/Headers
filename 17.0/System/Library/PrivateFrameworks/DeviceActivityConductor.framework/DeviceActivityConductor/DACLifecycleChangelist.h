@class NSArray;

@interface DACLifecycleChangelist : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_infos;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)enumerate:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLifecycleInfoArray:(id)a0;
- (id)lifecycleInfoForActivity:(id)a0;

@end
