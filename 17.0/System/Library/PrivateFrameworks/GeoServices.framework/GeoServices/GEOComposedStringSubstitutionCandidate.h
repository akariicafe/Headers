@class GEOComposedString, GEOComposedStringOptions;

@interface GEOComposedStringSubstitutionCandidate : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedStringOptions *_optionsToUse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int waypointCategory;
@property (readonly, nonatomic) GEOComposedString *composedString;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
