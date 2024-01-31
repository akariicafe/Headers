@class NSSet;

@interface HMIAnalysisStateUpdate : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *torsoAnnotations;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stateUpdateByMergingStateUpdate:(id)a0;
- (id)initWithTorsoAnnotations:(id)a0;
- (id)initWithTorsoAnnotationsArray:(id)a0;

@end
