@class NSString, NSArray;

@interface _WKTextManipulationItem : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _identifier;
    struct RetainPtr<NSArray<_WKTextManipulationToken *>> { void *m_ptr; } _tokens;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) BOOL isSubframe;
@property (readonly, nonatomic) BOOL isCrossSiteSubframe;
@property (readonly, copy, nonatomic) NSString *debugDescription;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_descriptionPreservingPrivacy:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 tokens:(id)a1;
- (id)initWithIdentifier:(id)a0 tokens:(id)a1 isSubframe:(BOOL)a2 isCrossSiteSubframe:(BOOL)a3;
- (BOOL)isEqualToTextManipulationItem:(id)a0 includingContentEquality:(BOOL)a1;

@end
