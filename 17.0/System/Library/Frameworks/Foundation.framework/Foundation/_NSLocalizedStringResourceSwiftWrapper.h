@class NSString, NSURL, NSLocale;

@interface _NSLocalizedStringResourceSwiftWrapper : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, readonly) NSString *table;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 locale:(id)a3 bundleURL:(id)a4;
- (id)localize;
- (id)localizeWithOptions:(id)a0;

@end
