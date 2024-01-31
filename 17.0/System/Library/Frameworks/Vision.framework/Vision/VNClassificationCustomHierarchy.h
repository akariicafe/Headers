@class NSDictionary, VNRequestSpecifier, NSString;

@interface VNClassificationCustomHierarchy : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestSpecifying> {
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *__ptr_; struct __shared_weak_count *__cntrl_; } _hierarchicalModel_DO_NOT_ACCESS_DIRECTLY;
    NSDictionary *_additionalRelationships;
    VNRequestSpecifier *_originatingRequestSpecifier;
    unsigned long long _originatingRequestDetectionLevel;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *relationships;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy) NSString *requestClassName;

+ (id)customHierarchyForRequest:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (Class)requestClassAndReturnError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_addRelationships:(id)a0 error:(id *)a1;
- (id)customHierarchyWithAdditionalParent:(id)a0 children:(id)a1 error:(id *)a2;
- (id)customHierarchyWithAdditionalRelationships:(id)a0 error:(id *)a1;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })hierarchicalModelAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 detectionLevel:(unsigned long long)a1;
- (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel *x0; struct __shared_weak_count *x1; })newHierarchicalModelAndReturnError:(id *)a0;
- (unsigned long long)requestDetectionLevel;

@end
