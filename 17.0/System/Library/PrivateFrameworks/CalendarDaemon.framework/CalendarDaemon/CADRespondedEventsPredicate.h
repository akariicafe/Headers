@interface CADRespondedEventsPredicate : CADPredicate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)predicate;

- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
