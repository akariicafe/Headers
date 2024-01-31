@class NSSet, NSString, NSMutableSet;

@interface IRContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_internalCandidateResults;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *candidateResults;
@property (readonly, nonatomic) NSString *contextIdentifier;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidateResult:(id)a0;

@end
