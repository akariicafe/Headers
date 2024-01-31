@class NSString;

@interface _PGInterruption : NSObject <NSCopying> {
    unsigned long long _bs_hash;
}

@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) NSString *attribution;

- (unsigned long long)hash;
- (id)initWithReason:(long long)a0 attribution:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
