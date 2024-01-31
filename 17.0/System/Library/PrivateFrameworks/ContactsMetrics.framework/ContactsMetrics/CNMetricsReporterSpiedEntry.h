@class NSString, NSMutableDictionary;

@interface CNMetricsReporterSpiedEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSMutableDictionary *dictionary;
@property (readonly, copy) NSString *event;
@property (readonly, getter=isLogged) BOOL logged;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 event:(id)a1 logged:(BOOL)a2;

@end
