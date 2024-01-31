@class NSDictionary, NSSet;

@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_textStrokeIdentifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *scriptClassificationsByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *substrokesByStrokeIdentifier;
@property (readonly, copy, nonatomic) NSSet *textStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSSet *nontextCandidates;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 scriptClassificationsByStrokeIdentifier:(id)a1 substrokesByStrokeIdentifier:(id)a2 nontextCandidates:(id)a3;
- (BOOL)isEquivalentToStrokeClassificationResult:(id)a0;

@end
