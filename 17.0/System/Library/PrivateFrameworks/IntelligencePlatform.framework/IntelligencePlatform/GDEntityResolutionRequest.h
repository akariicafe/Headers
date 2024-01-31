@class NSString, NSArray;

@interface GDEntityResolutionRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *entityClassFilter;
@property (readonly, copy, nonatomic) NSArray *spans;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long constraint;
@property (readonly, copy, nonatomic) NSArray *sourceIDs;
@property (readonly, copy, nonatomic) NSString *kgq;
@property (readonly, nonatomic) BOOL includeFeatures;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKgq:(id)a0 mode:(long long)a1;
- (id)initWithKgq:(id)a0 text:(id)a1 mode:(long long)a2;
- (id)initWithKgq:(id)a0 text:(id)a1 mode:(long long)a2 includeFeatures:(BOOL)a3;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 mode:(long long)a2;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 mode:(long long)a2 includeFeatures:(BOOL)a3;
- (id)initWithSourceIDs:(id)a0 text:(id)a1 spans:(id)a2 mode:(long long)a3 includeFeatures:(BOOL)a4;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 kgq:(id)a5;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6;
- (id)initWithText:(id)a0 entityClassFilter:(id)a1 spans:(id)a2 mode:(long long)a3 constraint:(long long)a4 sourceIDs:(id)a5 kgq:(id)a6 includeFeatures:(BOOL)a7;

@end
