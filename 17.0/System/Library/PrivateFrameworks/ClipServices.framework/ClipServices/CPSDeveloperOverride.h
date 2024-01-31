@class NSString, NSURL;

@interface CPSDeveloperOverride : NSObject <NSCopying, NSSecureCoding> {
    struct CGImage { } *_heroImage;
}

@property (class, readonly, nonatomic) BOOL hasOverride;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *invocationURL;
@property (copy, nonatomic) NSString *clipBundleID;
@property (nonatomic) struct CGImage { } *heroImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long action;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)allOverrides;
+ (id)overrideForURL:(id)a0;
+ (unsigned long long)_indexOf:(id)a0;
+ (void)loadAllOverridesIfNeeded;
+ (void)persistAllOverrides;

- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
