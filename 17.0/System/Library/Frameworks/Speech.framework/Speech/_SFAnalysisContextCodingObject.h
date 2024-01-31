@class NSArray, NSString;

@interface _SFAnalysisContextCodingObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *leftContext;
@property (readonly, copy, nonatomic) NSArray *rightContext;
@property (readonly, copy, nonatomic) NSArray *selectedText;
@property (readonly, copy, nonatomic) NSString *geoLMRegionID;
@property (readonly, copy, nonatomic) NSArray *contextualStrings;
@property (readonly, copy, nonatomic) NSArray *contextualNamedEntities;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLeftContext:(id)a0 rightContext:(id)a1 selectedText:(id)a2 geoLMRegionID:(id)a3 contextualStrings:(id)a4 contextualNamedEntities:(id)a5;

@end
