@class NSString, NSNumber, NSArray;

@interface CERuleset : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSNumber *maxRecommendations;
@property (nonatomic) BOOL ignoreClientSectionRank;
@property (readonly, nonatomic) NSArray *context;
@property (copy, nonatomic) NSString *userType;
@property (retain, nonatomic) NSArray *recommendationRules;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
