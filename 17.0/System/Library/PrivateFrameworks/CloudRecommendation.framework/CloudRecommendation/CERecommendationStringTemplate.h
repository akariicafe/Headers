@class NSDictionary;

@interface CERecommendationStringTemplate : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *titleTemplates;
@property (readonly, nonatomic) NSDictionary *subTitleTemplates;
@property (readonly, nonatomic) NSDictionary *messageTemplates;
@property (readonly, nonatomic) NSDictionary *actionTitleTemplates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
