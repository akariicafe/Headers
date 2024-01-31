@class NSArray, NSNumber, NSSet;

@interface _LTDisambiguationLinkConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *unvalidatedAdjacencyList;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } sourceRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (readonly, nonatomic) NSArray *adjacencyList;
@property (readonly, nonatomic) NSNumber *gender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, nonatomic) NSSet *edgeTypes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_finishValidating;
- (void)_insertPrefix:(id)a0;
- (id)_unvalidatedEdgeFromAdjacencyListMatchingTargetNodeIndex:(unsigned long long)a0;
- (void)_validateWithAdjacencyList:(id)a0 gender:(id)a1 defaultGender:(id)a2;
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 adjacencyList:(id)a2 gender:(id)a3 defaultGender:(id)a4;
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 targetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 unvalidatedAdjacencyList:(id)a2;
- (id)initWithSourceText:(id)a0 sourceSnippet:(id)a1 targetText:(id)a2 targetSnippet:(id)a3 adjacencyList:(id)a4 gender:(id)a5 defaultGender:(id)a6;
- (id)initWithSourceText:(id)a0 sourceSnippet:(id)a1 targetText:(id)a2 targetSnippet:(id)a3 unvalidatedAdjacencyList:(id)a4;

@end
